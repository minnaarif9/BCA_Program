# To collect individual room details

def total_gst(amount):
    gst = amount * 18 / 100
    return gst


def get_room_details():
    bookings = {}

    for i in range(5):
        print("\nEnter details for booking", i + 1)

        room_no = int(input("Enter the room no: "))
        c_name = input("Enter customer name: ")
        contact = input("Enter the contact number of customer: ")
        amount = int(input("Enter the amount: "))
        date = input("Enter the date of booking: ")

        bookings[room_no] = display_booking(
            room_no, c_name, contact, amount, date
        )

    return bookings


# To display booking details

def display_booking(room_no, c_name, contact, amount, date):

    booking_info = {
        "Room no": room_no,
        "Customer Name": c_name,
        "Contact Number": contact,
        "Booking Amount": amount,
        "Date of booking": date
    }

    print("\nBooking info:", booking_info)

    return booking_info


# To get total room price

def get_total_room_price(bookings):

    total = 0

    for i in bookings:
        total = total + bookings[i]["Booking Amount"]

    gst = total_gst(total)

    total_price = total + gst

    print("\nTotal Room Price:", total)
    print("Total GST:", gst)
    print("Total Amount:", total_price)


# Main program

bookings = get_room_details()

get_total_room_price(bookings)