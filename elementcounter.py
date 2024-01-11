#WAP to print the index of value take input from user.If the value exists at multiple locations in the list , then print all the indices,Also count the number of times

l = input("Enter the elements : " ).split()
count = 0
a = []
flag = 0

for i in range(0,len(l)):
    count = 0
    flag = 0
    for j in range(i,len(l)):
        if(l[i] == l[j]):
            count+=1
    

    if(not(l[i] in a)):
        print(f"\n{l[i]} Appears {count}  times at indices : \n ",end="")
    else:
        pass


    for j in range(i,len(l)) :
        
        if(not(l[i] in a)):

            if(l[i] == l[j]):
                print(j+1,end=" ")
                flag += 1

            if(flag == count):
                a.append(l[i])
           