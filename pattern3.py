n = 5
for i in range (0 , n):
    for j in range(i,n):
        print(" ",end="")

    for j in range(-1 , i , 1):
        if(j==(i-1)):
            print("*",end="")
            continue
        print("*",end=" ")

    for j in range(0,n-i-1):
        print(" ",end="")

    for j in range(0,(n-i)):
        print(" ",end="")
        
    for j in range(-1 , i):
        if(j == -1):
            print("",end="*")
            continue
        print(" ",end="*")
        
    print("")