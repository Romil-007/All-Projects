n = int(input("Enter the number  "))
for i in range(0,n):
    for j in range(0 , (2*n)-i):
        print(" ",end="")
    print("*" , end = "")
    for j in range(0 , (2*i)-1):
        print(" ",end="")

    if(not(i == 0)):
        print("*")
    else:
        print("")
    if(i == (n-1)):
        for x in range(0,n):
            if(x==0):
                for i in range(0 , n):
                    print("*" , end= "")
                for i in range (0 , (2 * n)+1):
                    print(" ",end="")
                for i in range(0 , n):
                    print("*" , end= "")
                print("")
            for j in range(-1 , x):
                print(" ", end = "")
            print("*" , end="   " )
            for j in range(0 , (3*n)-(2*x)):
                print(" ", end="")

            print("*")


for i in range (0 ,n ):
    for j in range(0 , n-i):
        print(" ",end="")
    print("*" , end = "")
    for j in range (0 , (2*n)+2*i):
        print(" ",end="")
    print("*")
    if(i == (n-1)):
        for m in range(0,n):
            print("*",end="")
        for m in range(0,2*n+(int(n/2))):
            print(" " , end="")
        for m in range(0,n):
            print("*" , end="")

    if(i == (n-1)):
        print("")
        for x in range(0,n):
            for k in range(0,(n+x)):
                print(" ",end="")
            print("*" , end="")
            for k in range(0,(2*n)-(2*x)):
                print(" ", end="")

            print("*")
            if(x==(n-1)):
                for i in range (0 ,2*n):
                    print(" ",end="")
                print("*")

