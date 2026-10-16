#demonstrate bank operation using least and tuples [deposit ,withdraw and display] least inside the tuple
#in tuple store name , account no , date of birth , pan no 
#in list store email id , contact no , address , current balance
no_account = int(input("Enter the number of accounts: "))
account_details = []

# Enter account details
for i in range(no_account):
    name = input("Enter the name: ")
    phone = int(input("Enter the phone number: "))
    email = input("Enter your email: ")
    address = input("Enter the address: ")
    pan_no = input("Enter the PAN no: ")
    DOB = input("Enter your DOB: ")
    acc_no = int(input("Enter the account number: "))
    current_balance = float(input("Enter the current balance: "))

    lists = [email, phone, address, current_balance]
    tuples = (name, acc_no, pan_no, DOB, lists)

    print(tuples)
    account_details.append(tuples)

print("\nACCOUNT DETAILS:\n", account_details)

# Bank menu
while True:
    print("\n------BANK MENU------")
    print("1. DEPOSIT")
    print("2. WITHDRAW")
    print("3. SHOW ACCOUNTS")
    print("4. EXIT")

    choice = int(input("Enter your choice: "))

    if choice == 1 or choice == 2:
        acc_no = int(input("Enter account number: "))
        found = False

        for tuples in account_details:
            if tuples[1] == acc_no:
                found = True
                print("ACCOUNT FOUND.....")

                # Deposit
                if choice == 1:
                    deposit = float(input("Enter the deposit amount: "))

                    if deposit <= 0:
                        print("INVALID DEPOSIT AMOUNT")
                    else:
                        tuples[4][3] += deposit
                        print("CURRENT BALANCE:", tuples[4][3])

                # Withdraw
                elif choice == 2:
                    withdraw = float(
                        input("Enter the withdrawing amount: ")
                    )

                    if withdraw <= 0:
                        print("INVALID WITHDRAWAL AMOUNT")
                    elif withdraw > tuples[4][3]:
                        print("INSUFFICIENT BALANCE")
                    else:
                        tuples[4][3] -= withdraw
                        print("CURRENT BALANCE:", tuples[4][3])

                break

        if found == False:
            print("INVALID ACCOUNT NUMBER...")

    elif choice == 3:
        print("ACCOUNT DETAILS =", account_details)

    elif choice == 4:
        print("THANK YOU FOR VISITING US.....")
        break

    else:
        print("INVALID CHOICE")