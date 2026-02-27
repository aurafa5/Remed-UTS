T = int(input("Suhu awal: "))
menit = 0

while True:
    menit += 1
    T += 5
    if menit % 4 == 0:
        T -= 12
    if T > 100:
        print(f"Menit {menit}: Mesin meledak!")
        break
    print(f"Menit {menit}: Suhu {T}°C")