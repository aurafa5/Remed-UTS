D = float(input())
M = float(input())

beban_awal = 150
muatan_akhir = M * 0.9
konsumsi_per_km = muatan_akhir * 5
total_liter = konsumsi_per_km * D
total_biaya = total_liter * 18500

print(int(total_biaya))