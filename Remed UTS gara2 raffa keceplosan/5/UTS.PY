total = 1_000_000_000

material = total * 0.40
alat = total * 0.25
upah = total * 0.20

upah_mandor = upah * 0.15 * 5
sisa = upah - upah_mandor

gaji_kuli = sisa / 50

print(int(gaji_kuli))