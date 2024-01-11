# def find(a,b):
#     l = []
#     if b in a:
#         for i in range(0,len(a)):
#             flag = 0
#             if(b[0] == a[i]):
#                 for j in range(0,len(b)):
#                     if(not(a[i+j]==b[j])):
#                         flag = 0
#                         break
#                     flag = 1
#             if(flag == 1 ):
#                 l += [i]
                
#         return l 
#     else:
#         return "None"
        


# a= input("enter the word : ") 

# b = input("enter the element to search : ")
# l = find(a , b)

# for i in l:
#     print(f"{i} to {i+len(b)-1}") 

# def king(a,b):
#     first= a.split(" ")
#     second = b.split(" ")
#     common = []
#     for i in first:
#         for j in second:
#             if(i == j):
#                 if j in common:
#                     pass
#                 else:
#                     common += [j]

#     return common


# a = input(f"Enter first :  ")
# b = input("Enter second : ")
# print("sadjkssdkjajk")




# vowel = ["A","E","I","O","U"]

# a = input("Enter the word : ")

# count = 0

# for i in a:
#     if a.upper() in vowel:
#         count+=1
    
# print(count)




# a = input("Enter the sentence : ")

# count = 1

# for i in a:
#     if(i == " "):
#         count+= 1

# print(count)





# a = input("Enter first : ")
# b = input("Enter second : ")

# flag = 1
# for k in b:
#     if not(k in a):

#         flag = 0
#         break

#     count = 0
#     number = 0
#     for i in a:
#         if(i == k):
#             count+=1
    
#     for i in b:
#         if(k == i ):
#             count-=1

#     if(count == 0):
#         flag = 1
#     else:
#         flag = 0

        

# if flag == 0:
#     print("No")
# else:
#     print("YES")




a = input("Enter  : ").split(" ")
for i in range(0,len(a)):
    str1 = ""
    for j in range(0,len(a[i])):
        
        if(a[i][j] == a[i][j].upper()):
            if(j == 0):
                str1 += a[i][j]
            else:
                str1 += "_" + a[i][j].lower()
        else:
            str1 += a[i][j]
    
    a[i] = str1


for i in a:
    print(i,end=" ")




# a = input("enter : ").split(" ")

# print(a)

# for i in range(0,len(a)):
#     for j in range(i,len(a)):

#         if(len(a[i]) > len(a[j])):
#             temp = a[j]
#             a[j] = a[i]
#             a[i] = temp

# for i in a:
#     print(i , end = " ")
    

