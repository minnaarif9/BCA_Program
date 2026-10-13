menu = {"pizza": 200, "burger": 120, "pasta": 150, "juice": 80}

def get_price(item):
    return menu.get(item.lower(), 0)

def item_cost(item, qty):
    return get_price(item) * qty

def calculate_gst(amount, rate=0.05):
    return amount * rate

def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent / 100
    gst = calculate_gst(subtotal - discount)
    return discount, gst, subtotal - discount + gst

def split_bill(total, people):
    return int(total) // people, int(total) % people

item = input("Enter item: ")
qty = int(input("Enter quantity: "))

if get_price(item) == 0:
    print("Item not available.")
else:
    discount_percent = float(input("Enter discount %: "))
    people = int(input("Enter number of people: "))

    discount, gst, total = generate_bill(item_cost(item, qty), discount_percent)
    each, remaining = split_bill(total, people)

    print("\n--- BILL ---")
    print("Item =", item)
    print("Quantity =", qty)
    print("Subtotal =", item_cost(item, qty))
    print("Discount =", discount)
    print("GST =", gst)
    print("Final Total =", total)
    print("Each person pays =", each)
    print("Rupees left =", remaining)