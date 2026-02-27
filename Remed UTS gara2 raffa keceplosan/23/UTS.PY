jam = float(input("Jam kerja per minggu: "))

gaji_kotor = 0

if jam <= 40:
    gaji_kotor = jam * 50000
elif jam <= 50:
    gaji_kotor = 40 * 50000 + (jam - 40) * (1.5 * 50000)
else:
    gaji_kotor = 40 * 50000 + 10 * (1.5 * 50000) + (jam - 50) * (2 * 50000)

potongan = gaji_kotor * 0.02 + gaji_kotor * 0.05
gaji_bersih = gaji_kotor - potongan

print("Gaji Kotor:", int(gaji_kotor))
print("Total Potongan:", int(potongan))
print("Gaji Bersih:", int(gaji_bersih))