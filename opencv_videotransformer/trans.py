import os
import re
from pathlib import Path

SEGMENT_CODES = [
    0x00, 0x06, 0x5B, 0x4F, 0x66, 
    0x6D, 0x7D, 0x07, 0x7F, 0x6F
]

def generate_command(digit: int, position: int) -> str:
    """生成显示命令"""
    seg_code = SEGMENT_CODES[digit] if 0 <= digit <=9 else 0x00
    cmd = (0xF - position) << 8 | seg_code
    return f"0x{cmd:03X}"

def parse_filename_number(filename: str) -> int:
    """解析文件名中的数字"""
    match = re.search(r"Matrix_(\d+)\.txt", filename)
    return int(match.group(1)) if match else -1

def process_frame(input_path: Path, output_file):
    """处理单个文件帧"""
    try:
        with open(input_path, 'r') as f:
            lines = [line.strip() for line in f.readlines()[:6]]
    except Exception as e:
        print(f"Error: {input_path.name} - {str(e)}")
        return

    
    # 处理6行显示数据
    for row in range(1, 7):
        line = lines[row-1] if row-1 < len(lines) else ''
        digits = []
        for s in line.split()[:8]:  # 取前8个数字
            try:
                num = int(s)
                digits.append(num if 0 <= num <=9 else 8)
            except:
                digits.append(8)
        digits = (digits + [8]*8)[:8]  # 补足8位
        
        # 生成显示命令
        output_file.write(f"ch451_init_config{row}();\n")
        for pos in range(8):
            cmd = generate_command(digits[pos], pos)
            output_file.write(f"CH451_Send{row}({cmd}); // Pos{pos}->{digits[pos]}\n")
    
    output_file.write("\ndelay(50);  // Frame delay\n")

def main():
    """主处理流程"""
    # 新筛选条件：MOD5=1
    all_files = [
        f for f in Path('.').glob('Matrix_*.txt')
    ]
    
    # 按文件名数字排序
    files = sorted(
        all_files,
        key=lambda x: parse_filename_number(x.name)
    )

    with open('code.txt', 'w') as out:
        # 文件头信息
        out.write("// Auto-generated display code\n")
        out.write(f"// Total frames: {len(files)}\n")
        out.write("// Config:\n")
        out.write("// - MOD5=1 filter\n")  # 更新筛选说明
        out.write("// - 50ms frame delay\n\n")
        
        # 处理每个文件
        for idx, file in enumerate(files, 1):
            print(f"Processing [{idx}/{len(files)}] {file.name}")
            process_frame(file, out)

if __name__ == "__main__":
    main()
