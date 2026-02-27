volume = 0
jam = 0

while True:
    jam += 1
    volume += 500

    if jam % 4 == 0:
        volume -= 1200
        if volume < 0:
            volume = 0

    if volume >= 10000:
        print("Siaga 1")
        break