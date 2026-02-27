magnitudo = float(input("Magnitudo: "))
kedalaman = float(input("Kedalaman (km): "))

if magnitudo < 5.0:
    status = "Ringan"
elif magnitudo <= 6.5:
    status = "Sedang"
elif magnitudo <= 7.5:
    status = "Kuat"
else:
    status = "Sangat Berbahaya"

if kedalaman < 10:
    status += " - Potensi Tsunami"

print(status)