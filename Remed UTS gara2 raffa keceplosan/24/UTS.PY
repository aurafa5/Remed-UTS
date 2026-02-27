paket = input("Pilih paket (silver/gold/platinum): ").lower()
bulan = int(input("Jumlah bulan: "))

harga = 0
if paket == "silver":
    harga = 200000
elif paket == "gold":
    harga = 350000
elif paket == "platinum":
    harga = 500000

bayar_bulan = 10 if bulan == 12 else bulan
total = harga * bayar_bulan

print("Total Biaya: Rp", total)