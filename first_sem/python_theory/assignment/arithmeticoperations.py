a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print("Addition =", a + b)
print("Subtraction =", a - b)
print("Multiplication =", a * b)

if b != 0:
    print("Division =", a / b)
    print("Floor Division =", a // b)
    print("Modulus =", a % b)
else:
    print("Error: Division by zero is not possible.")

print("Power =", a ** b)