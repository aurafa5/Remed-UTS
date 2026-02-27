penjualan = []

for i in range(2):
    row = []
    for j in range(3):
        row.append(int(input()))
    penjualan.append(row)

for i in range(2):
    total = sum(penjualan[i])
    print(total)