N = int(input())

bata_per_jam = 5 * 12
jam_kerja = 0
total_jam = 0

while N > 0:
    jam_kerja += 1
    total_jam += 1
    N -= bata_per_jam

    if jam_kerja == 4 and N > 0:
        total_jam += 1
        jam_kerja = 0

jam = total_jam
menit = (total_jam - jam) * 60

print(f"{jam} jam {int(menit)} menit")