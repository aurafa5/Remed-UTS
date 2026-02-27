belanja = int(input("Total belanja: "))
hari = input("Hari apa sekarang? ").lower()

cashback = 0

if 50000 <= belanja <= 100000:
    cashback = belanja * 0.05
elif belanja > 100000:
    cashback = belanja * 0.10
    if cashback > 25000:
        cashback = 25000

if hari == "minggu":
    cashback += 5000

print("Saldo akhir (setelah cashback): Rp", int(belanja - belanja + cashback))