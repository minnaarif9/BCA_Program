balance = 0

while True:
    print("\n1. Deposit\n2. Withdraw\n3. Account Details\n4. Exit")
    choice = int(input("Enter choice: "))

    if choice == 1:
        amount = float(input("Enter amount: "))
        if amount < 0:
            print("Error: Negative amount")
        else:
            balance += amount
            print("Deposit successful. Balance =", balance)

    elif choice == 2:
        amount = float(input("Enter amount: "))
        if amount < 0:
            print("Error: Negative amount")
        elif amount > balance:
            print("Error: Insufficient balance")
        else:
            balance -= amount
            print("Withdrawal successful. Balance =", balance)

    elif choice == 3:
        print("Account Balance =", balance)

    elif choice == 4:
        print("Thank you.")
        break

    else:
        print("Error: Invalid choice")