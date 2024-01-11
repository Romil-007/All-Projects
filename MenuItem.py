class MenuItem:
    def __init__(self):
        self.name = ""
        self.description = ""
        self.price = 0.0

    def show_menu(self):
        pass

    def cart(self, choice):
        pass

class Dessert(MenuItem):
    def show_menu(self):
        while True:
            try:
                choice = int(input("\n1. Vanilla Ice Cream (INR 80/pc)\n2. Choco lava cake (INR 120/pc)\n3. Ice cream Shake (INR 60/pc)\n"))
                if 1 <= choice <= 3:
                    return choice
                else:
                    print("Wrong input. Please try again.")
            except ValueError:
                print("Invalid input. Please enter a number.")

    def cart(self, choice):
        if choice == 1:
            self.name = "Vanilla Ice Cream"
            self.price = 80
            self.description = "Made with Milk and essence of vanilla"
        elif choice == 2:
            self.name = "Choco Lava Cake"
            self.price = 120
            self.description = "A Chocolate based cake with melted chocolate filling"
        elif choice == 3:
            self.name = "Ice Cream Shake"
            self.price = 60
            self.description = "Milk Shake with ice cream topped on it, a mouthwatering edible shake"

class Appetizer(MenuItem):
    def show_menu(self):
        while True:
            try:
                choice = int(input("\n1. Potato Wedges (INR 120/plate)\n2. French Fries (INR 100/plate)\n3. Paneer Chilly (INR 180/plate)\n"))
                if 1 <= choice <= 3:
                    return choice
                else:
                    print("Wrong input. Please try again.")
            except ValueError:
                print("Invalid input. Please enter a number.")

    def cart(self, choice):
        if choice == 1:
            self.name = "Potato Wedges"
            self.price = 120
            self.description = "Fried Potato with wrinkled shape and seasoned with salt and pepper"
        elif choice == 2:
            self.name = "French Fries"
            self.price = 100
            self.description = "Deep Fried Potato sticks with Peri Peri seasonings"
        elif choice == 3:
            self.name = "Paneer Chilly"
            self.price = 180
            self.description = "Paneer Seasoned with veggies and sauce and Saute with golden crisp"

class MainCourse(MenuItem):
    def show_menu(self):
        while True:
            try:
                choice = int(input("\n1. Veg Plate Thali (INR 230/Thali)\n2. Non Veg Plate Thali (INR 260/Thali)\n3. Special Veg Thali (INR 280/Thali)\n4. Special Non Veg Thali (INR 300/Thali)\n"))
                if 1 <= choice <= 4:
                    return choice
                else:
                    print("Wrong input. Please try again.")
            except ValueError:
                print("Invalid input. Please enter a number.")

    def cart(self, choice):
        if choice == 1:
            self.name = "Veg Plate Thali"
            self.price = 230
            self.description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside With salad, paneer, Dal, papad"
        elif choice == 2:
            self.name = "Non Veg Plate Thali"
            self.price = 260
            self.description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside With salad, Chicken, Dal, papad"
        elif choice == 3:
            self.name = "Special Veg Thali"
            self.price = 280
            self.description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside With salad, 2 paneer sabzi, veg mix, Dal, papad"
        elif choice == 4:
            self.name = "Special Non Veg Thali"
            self.price = 300
            self.description = "A Full meal Thali Served with 4 Rotis and Jeera Rice alongside With salad, 2 Chicken sabzis, Mutton, Dal, papad"

def main():
    price = 0
    pay = ""
    id = ""
    y = ""
    des = Dessert()
    app = Appetizer()
    mncr = MainCourse()

    while True:
        print("\nWELCOME TO RESTAURANT\n\nWHAT IS IT THAT YOU'D LIKE TO ORDER?")
        print("\n1. Dessert\n2. Appetizer\n3. Main Course\n")
        choice = int(input())
        
        if choice > 3 or choice < 1:
            continue

        if choice == 1:
            print("\n               DESSERT                  \n")
            dc = des.show_menu()
            des.cart(dc)
        elif choice == 2:
            print("\n               APPETIZER                  \n")
            ac = app.show_menu()
            app.cart(ac)
        elif choice == 3:
            print("\n              MAIN MENU                  \n")
            mc = mncr.show_menu()
            mncr.cart(mc)

        if choice == 1:
            print("\n\nYour Order : ")
            print(f"\n           {des.name}  for INR {des.price}\n          {des.description}")
            price += des.price
        elif choice == 2:
            print("Your Order : ")
            print(f"\n           {app.name}  for INR {app.price}\n           {app.description}")
            price += app.price
        elif choice == 3:
            print("Your Order : ")
            print(f"\n           {mncr.name}  for INR {mncr.price}\n           {mncr.description}")
            price += mncr.price

        print("\n\nWant to order any other food? (y/n)")
        y = input()

        if y.upper() != 'Y':
            print("\n\nEAT WELL :)")
            print(f"Total Bill = INR {price} + (TAX) {price * 0.18}")
            print(f"\n\nGRAND TOTAL  = INR {price + (price * 0.18)}")

            print("\n\n\nHow would you like to pay? (Online/Cash)")
            pay = input()

            if pay.upper() == "ONLINE" or pay.upper() == "CASH":
                if pay.upper() == "ONLINE":
                    print("\nEnter Upi id : ")
                    id = input()
                    print(f"Sent the request to pay {price + (price * 0.18)} to your upi id {id}")
                else:
                    print(f"Please pay {price + (price * 0.18)} with the cash. Thank you :)")
            print("\nTHANK YOU FOR CHOOSING OUR TREAT. HAVE A GREAT DINE IN :)")

            break

if __name__ == "__main__":
    main()

