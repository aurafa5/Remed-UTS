penjualan = []

for i in range(3):
    row = []
    for j in range(4):
        row.append(int(input()))
    penjualan.append(row)

max_total = -1
cabang_tertinggi = 0

for i in range(3):
    total = sum(penjualan[i])
    if total > max_total:
        max_total = total
        cabang_tertinggi = i + 1

print(cabang_tertinggi)