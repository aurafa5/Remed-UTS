nilai = []

for i in range(3):
    row = []
    for j in range(3):
        row.append(int(input()))
    nilai.append(row)

for col in range(3):
    total = 0
    for row in range(3):
        total += nilai[row][col]
    print(total)