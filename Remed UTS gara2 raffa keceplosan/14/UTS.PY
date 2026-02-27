rapat = int(input())
kerja = int(input())
lobby = int(input())

watt = rapat*2000 + kerja*5000 + lobby*8000
kwh_per_hari = (watt * 12) / 1000
biaya = kwh_per_hari * 1500 * 30

print(int(biaya))