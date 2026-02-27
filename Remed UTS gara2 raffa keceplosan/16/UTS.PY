tinggi = 0
hari = 0

while True:
    hari += 1
    tinggi += 15

    if hari % 7 == 0:
        tinggi -= 20

    if tinggi <= 0:
        break