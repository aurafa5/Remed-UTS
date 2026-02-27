patah = float(input("Persentase butir patah: "))
apek = int(input("Beras berbau apek? (1=ya, 0=tidak): "))

if apek == 1:
    print("Tidak Layak Konsumsi")
else:
    if patah < 5:
        print("Premium")
    elif patah <= 15:
        print("Medium A")
    elif patah <= 25:
        print("Medium B")
    else:
        print("Beras Raskin")