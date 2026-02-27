hutang = 10000000
cicilan = 500000
bunga_rate = 0.02
bulan = 0

while hutang > 0:
    bunga = hutang * bunga_rate
    hutang = hutang + bunga - cicilan
    bulan += 1
    
    print(f"Bulan {bulan}: Sisa hutang = {hutang:.2f}")

print(f"\nTotal waktu pelunasan: {bulan} bulan")