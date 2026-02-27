bensin = 60
for lap in range(1, 51):
    bensin -= 3
    if bensin <= 0:
        print(f"Lap {lap}: Bensin habis!")
        break
    if lap % 5 == 0:
        bensin += 10
    print(f"Lap {lap}: Sisa bensin {bensin}L")