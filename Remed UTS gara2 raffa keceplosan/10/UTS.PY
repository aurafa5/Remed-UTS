suhu = []
for i in range(10):
    suhu.append(float(input()))

rata = sum(suhu) / 10
maks = max(suhu)
jam_maks = suhu.index(maks) + 1

print(rata)
print(jam_maks)