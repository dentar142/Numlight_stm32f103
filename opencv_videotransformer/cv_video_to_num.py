import cv2
import numpy as np
import os

# 配置参数
IMAGE_SIZE = (80, 60)  # 图像尺寸（宽度、高度）
GRID_SIZE = (8, 6)     # 每个图像分为8×6个区域
GRAYSCALE_RANGE = 10   # 灰度值范围（0-9）

def process_images(start=1, end=618):
    # 获取当前工作目录
    current_dir = os.getcwd()
    print(f"当前工作目录: {current_dir}")

    for i in range(start, end + 1):
        # 1. 读取文件
        filename = f"Image{i}.jpg"
        file_path = os.path.join(current_dir, filename)

        if not os.path.exists(file_path):
            print(f"警告：{file_path} 不存在，已跳过")
            continue

        # 2. 预处理图像
        img = cv2.imread(file_path)
        if img is None:
            print(f"警告：无法读取 {file_path}，已跳过")
            continue

        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        resized = cv2.resize(gray, IMAGE_SIZE)

        # 3. 分块处理
        width, height = IMAGE_SIZE
        block_width = width // GRID_SIZE[0]
        block_height = height // GRID_SIZE[1]

        array = []
        for y in range(0, height, block_height):
            row = []
            for x in range(0, width, block_width):
                # 提取区块
                block = resized[y:y + block_height, x:x + block_width]
                
                # 计算区块的平均灰度值
                mean_gray = int(np.mean(block))
                
                # 将平均灰度值映射到0-9的范围
                mapped_value = min(int(mean_gray * GRAYSCALE_RANGE / 256), GRAYSCALE_RANGE - 1)
                row.append(str(mapped_value))
            array.append(row)

        # 4. 保存结果
        output_filename = f"Image{i}_matrix.txt"
        output_path = os.path.join(current_dir, output_filename)
        with open(output_path, 'w') as f:
            f.write('\n'.join([' '.join(line) for line in array]))
        
        # 进度提示
        if i % 10 == 0:
            print(f"已处理 {i}/{end} ({i/end:.1%})")

if __name__ == "__main__":
    process_images()