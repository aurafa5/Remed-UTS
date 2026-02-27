km = float(input())
rating = int(input())

pendapatan = km * 2500

if km > 50:
    pendapatan += 20000

if rating == 1:
    pendapatan += pendapatan * 0.05

print(int(pendapatan))