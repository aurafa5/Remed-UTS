air = 5000
jam = 0

while air > 500:
    jam += 1
    air -= air * 0.002
    if jam % 2 == 0:
        air -= 15
    if air <= 500:
        print(f"Jam {jam}: Refill Tanki! Sisa air {air:.1f} L")
        break
    print(f"Jam {jam}: Sisa air {air:.1f} L")