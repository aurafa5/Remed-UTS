pin_benar = "123456"
kesempatan = 3

while kesempatan > 0:
    pin = input()
    if pin == pin_benar:
        print("Selamat Datang")
        break
    kesempatan -= 1

if kesempatan == 0:
    print("Kartu Terblokir!")