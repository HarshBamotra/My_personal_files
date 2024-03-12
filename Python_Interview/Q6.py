# program to subtract two list 

l1 = eval(input("Enter the first list ::"))
l2 = eval(input("Enter the second list ::"))
result = []

if(len(l1) == len(l2)):
    for i in range(-1, 0):
        c = 0
        if(l1[i] < l2[i]):
            result.append(l1[i]+10 - l2[i])
            l1[i-1] -= 1
        else:
            result.append(l1[i]-l2[i])
    print("Result of list subtraction ::", result)
else:
    print("The length of the lists not same !!")

