kehadiran = []
for i in range(10):
    kehadiran.append(int(input()))

masuk = sum(kehadiran)
persen = (masuk / 10) * 100

print(masuk)
print(persen)