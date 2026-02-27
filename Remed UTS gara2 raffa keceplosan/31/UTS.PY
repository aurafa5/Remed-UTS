ketebalan = 10
km = 0

while ketebalan > 2:
    km += 100
    rusak = int(input(f"100km ke-{km}: Jalanan rusak? (1=ya,0=tidak): "))
    if rusak == 1:
        ketebalan -= 1.2
    else:
        ketebalan -= 0.5
    if ketebalan < 2:
        ketebalan = 2
    print(f"Setelah {km} km, sisa ketebalan: {ketebalan:.1f} mm")