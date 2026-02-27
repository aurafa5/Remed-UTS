pajak = float(input("Masukkan nilai pajak (Rp): "))
telat = int(input("Masukkan jumlah bulan telat: "))

if 1 <= telat <= 3:
    denda = 0.05 * pajak
elif 4 <= telat <= 6:
    denda = 0.10 * pajak
elif telat > 6:
    denda = 0.25 * pajak + 50000
else:
    denda = 0

total = pajak + denda

print("Denda yang harus dibayar: Rp", denda)
print("Total pembayaran: Rp", total)