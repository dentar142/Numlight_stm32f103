import os
import re
import random

input_folder = "input_files"
output_folder = "converted"
os.makedirs(output_folder, exist_ok=True)

for filename in os.listdir(input_folder):
    if not re.match(r"Image\d+_matrix\.txt", filename):
        continue
    
    # 提取文件编号
    num = re.search(r"\d+", filename).group()
    
    # 读取原始文件
    with open(f"{input_folder}/{filename}") as f:
        matrix = [[int(n) for n in line.split()] for line in f]
    
    # 转换矩阵
    converted = []
    for row in matrix:
        new_row = []
        for n in row:
            if n == 0: new_row.append("0")
            elif 1 <= n <= 2: new_row.append("1")
            elif 3 <= n <=5: new_row.append(random.choice(["4","7"]))
            elif n ==6: new_row.append("6")
            elif 7 <= n <=8: new_row.append(random.choice(["2","3","5","6","9","0"]))
            elif n ==9: new_row.append("8")
        converted.append(" ".join(new_row))
    
    # 写入新文件
    with open(f"{output_folder}/Matrix_{num}.txt", "w") as f:
        f.write("\n".join(converted))
