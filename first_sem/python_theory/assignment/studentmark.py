m1 = float(input("Enter marks in Subject 1: "))
m2 = float(input("Enter marks in Subject 2: "))
m3 = float(input("Enter marks in Subject 3: "))

if m1 < 0 or m1 > 100 or m2 < 0 or m2 > 100 or m3 < 0 or m3 > 100:
    print("Invalid marks. Marks must be between 0 and 100.")
else:
    total = m1 + m2 + m3
    average = total / 3
    percentage = (total / 300) * 100

    if percentage >= 70:
        grade = "DISTINCTION"
    elif percentage >= 60:
        grade = "FIRST CLASS"
    elif percentage >= 40:
        grade = "SECOND CLASS"
    else:
        grade = "FAIL"

    print("\n--- STUDENT RESULT ---")
    print("Total =", total)
    print("Average =", average)
    print("Percentage =", percentage)
    print("Grade =", grade)