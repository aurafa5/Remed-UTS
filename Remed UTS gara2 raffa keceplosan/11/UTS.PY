X = float(input())
K = float(input())

total_megabit = X * 8
detik = total_megabit / K

menit = int(detik // 60)
detik_sisa = detik % 60

print(menit, int(detik_sisa))