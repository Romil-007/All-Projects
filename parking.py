#WAP to calc parking charges of a vehicle enter the type of vehicle as char in (c car , b bus) and number of hours 

a = ["T","C","B"]
vehicle = input("Enter the type of vehicle (\"T\" >4 wheel , \"C\" 4 wheeler , \"B\" 2 wheeler)  : ")

while (not(vehicle.upper() in a)):
    vehicle = input("\n\nEnter the type of vehicle (t for >4 wheel , c for 4 wheeler , b for 2 wheeler)  : ")

arrival = input("\nEnter the time for arrival(hh:mm:(am/pm)) : ").split(":")

arrivalh = int(arrival[0]) if arrival[2] == "am" else int(arrival[0])+12

if(int(arrival[0]) == 12 and arrival[2].upper() == "PM"):
    arrivalh -= 12

arrivalm = int(arrival[1])

depart = input("\nEnter the time for departure (hh:mm:(am/pm)) : ").split(":")

departh = int(depart[0]) if depart[2].upper() == "AM" else int(depart[0])+12

if((int(depart[0]) == 12) and (depart[2].upper() == "PM")):
    departh -= 12


departm = int(depart[1])

time = (departm+(60-arrivalm) + (departh-(arrivalh+1))*60)/60

charge = 0
print("\n\n                                    RECIEPT        ")
print("____________________________________________________________________________________")
if(time>3):
    
    if(vehicle.upper() == "T"):
        charge += (3 * 20)+((time-3)*30)
        print(f"\nVEHICLE : >4 wheeler\nTIME : {time} hr        FARE : ₹20 per hour(Until 3 hr) + ₹30 per hour(After 3 hr)\nCALC : ₹20 x 3 hr + ₹30 x {time-3} hr\nTOTAL RENT :  ₹{charge}                     \n\n")
    elif(vehicle.upper() == "C"):
        charge += (3 * 10)+((time-3)*20)
        print(f"\nVEHICLE : 4 Wheeler\nTIME : {time} hr        FARE : ₹10 per hour(Until 3 hr) + ₹20 per hour(After 3 hr)\nCALC : ₹10 x 3 hr + ₹20 x {time-3} hr\nTOTAL RENT :  ₹{charge}                     \n\n")
    else:
        charge += (3 * 5)+((time-3)*10)
        print(f"\nVEHICLE : 2 Wheeler\nTIME : {time} hr        FARE : ₹5 per hour(Until 3 hr) + ₹10 per hour(After 3 hr)\nCALC : ₹5 x 3 hr + ₹10 x {time-3} hr\nTOTAL RENT :  ₹{charge}                     \n\n")

else:
    if(vehicle.upper() == "T"):
        print(f"\nVEHICLE : >4 Wheeler\nTIME : {time} hr        FARE : ₹20 per hour(Until 3 hr) \nCALC  : {time} hr x ₹20\nTOTAL RENT :  ₹{time*20}               \n\n")
    elif(vehicle.upper() == "B"):
        print(f"\nVEHICLE : 2 Wheeler\nTIME : {time} hr        FARE : ₹5 per hour(Until 3 hr) \nCAlC : {time} hr x ₹5\nTOTAL RENT :  ₹{time*5}                 \n\n")
    else:
        print(f"\nVEHICLE : 4 Wheeler\nTIME : {time} hr        FARE : ₹10 per hour(Until 3 hr) \nCALC : {time} hr x ₹10\nTOTAL RENT :  ₹{time*10}                \n\n")