obat = ["Paracetamol", "Amoxicillin", "Ibuprofen", "Antalgin", "CTM",
        "Vitamin C", "Omeprazole", "Ranitidine", "ORS", "Salbutamol"]

stok = [10, 5, 0, 7, 3, 12, 0, 4, 9, 1]

cari = input()

if cari in obat:
    idx = obat.index(cari)
    if stok[idx] == 0:
        print("Obat Habis")
    else:
        print(stok[idx])
else:
    print("Obat Tidak Ditemukan")