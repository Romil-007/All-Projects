n = int(input("Enter the number of rows : "))

# l = ["A" , "B" , "C" , "D" , "E" , "F" , "G" ,"H" , "I"]

# for i in range(0 , n):
#     for j in range(0,i+1):
#         print(l[i] , end="")
#     print("")

    
for i in range(0 , n):

    for j in range(0 , n-i):
        print(" ", end="")

    print("*",end="")

    for j in range ( 0 , 2*i-1 ):
        if(i < 1):
            break
        print(" ",end="")
   
    if(not(i<1)):
        print("*")
    else:
        print("")

for i in range(0 , n+1):

    for j in range(0 , i):
        print(" ", end="")

    print("*",end="")

    for j in range(0 , 2*(n-i)-1):
        if(i==n):
            break
        else:
            print(" ",end="")

    if(i==n):
        print("")
    else:
        print("*")

   

    
    
        


# for i in range(1,n+1):
#     if(i%2 ==0 ):
#         print(" *")
#     else:
#         print("* ")



# Pyramid
# for i in range ( 1 , n + 1 ):

    # for j in range(0 , i):
    #     print(" ",end=""

    # for j in range( 0 , n-i+1):
    #     print("*",end=" ")

    # print("\n",end="")
    

# 12345 pattern
# for i in range(1,n+1):

#     for j in range(1 , i+1):
#         print(j ,end= "")

#     print("")


#straight pyramid
# for i in range (1,n+1):

    # for j in range( 0 , i):
    #     print("*",end=" ")

    # print("\n",end="")