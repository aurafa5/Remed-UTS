berat = float(input("Berat apel (g): "))
cacat = int(input("Apel cacat? (1=ya,0=tidak): "))

if berat > 200:
    grade = "A"
elif berat >= 150:
    grade = "B"
else:
    grade = "C"

if cacat == 1:
    if grade == "A":
        grade = "B"
    elif grade == "B":
        grade = "C"
    else:
        grade = "Reject"

print("Grade apel:", grade)