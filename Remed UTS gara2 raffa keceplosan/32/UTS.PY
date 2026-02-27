baterai = 100
km = 0

while baterai >= 15:
    km += 1
    angin = int(input(f"Km {km}: Angin kencang? (1=ya,0=tidak): "))
    baterai -= 5 if angin == 1 else 3
    if baterai < 15:
        print(f"Km {km}: Landing Darurat! Baterai {baterai}%")
        break
    print(f"Km {km}: Baterai {baterai}%")