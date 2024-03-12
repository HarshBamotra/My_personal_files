# program to find the prifactors of a number

def isprime(x):
    count = 0
    for i in range(1, x+1):
        if(x%i == 0):
            count+=1
    if(count == 2):
        return True
    else:
        return False

x = int(input("Enter a number ::"))
for i in range(1, x):
    if(x%i == 0):
        if(isprime(i)):
            print(i)
