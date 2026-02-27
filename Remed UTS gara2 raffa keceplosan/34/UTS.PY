gol = int(input("Golongan kendaraan (1/2/3): "))
weekend = int(input("Akhir pekan? (1=ya,0=tidak): "))
etoll = int(input("Menggunakan e-toll bank tertentu? (1=ya,0=tidak): "))

if gol == 1:
    tarif = 12000
elif gol == 2:
    tarif = 18000
else:
    tarif = 30000

if weekend == 1:
    tarif *= 1.2

if etoll == 1:
    tarif -= 2000

print("Total tarif: Rp", int(tarif))