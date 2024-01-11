# n = 3

# for i in range (0 , 3):
#     val = 65
#     for j in range(0 , i):
#         print(" ",end="")
#     for j in range(i,5):
#         print(chr(val+j) , end= " ")
#     print("")


n = 3

# A 65  B 66 C 67 D 68 E 69
# C D E
#B C D E

for i in range(2 , 0 , -1):
    val1 = 67-(2-i)
    for j in range(0,i):
        print(" ",end="")
    for j in range(0,(5-i)):
        print(chr(val1+j),end=" ")

    print("")

for i in range (0 , n):
    val = 65
    for j in range(0 , i):
        print(" ",end="")
    for j in range(i,5):
        print(chr(val+j) , end= " ")
    print("")