kursi = [[0 for _ in range(5)] for _ in range(5)]

baris = int(input())
kolom = int(input())

if kursi[baris][kolom] == 1:
    print("Kursi Penuh!")
else:
    kursi[baris][kolom] = 1
    for r in kursi:
        print(r)