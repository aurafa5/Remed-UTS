jarak = int(input("Jarak (km): "))
bagasi = int(input("Bagasi (kg): "))
umur = int(input("Umur: "))

if jarak <= 50:
    tarif = 50000
elif jarak <= 150:
    tarif = 125000
else:
    tarif = 250000

tambahan = 0
if bagasi > 20:
    tambahan = (bagasi - 20) * 10000

if umur > 60:
    tarif *= 0.8

total = tarif + tambahan
print("Total Tiket: Rp", int(total))