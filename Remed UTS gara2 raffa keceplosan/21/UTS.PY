N = int(input("Jumlah paket: "))

bonus_per_paket = 3000 if N > 50 else 2000
bonus = N * bonus_per_paket

tambahan = (N // 10) * 5000

total = bonus + tambahan
print("Pendapatan: Rp", total)