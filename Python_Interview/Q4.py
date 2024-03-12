#programs to print the occurance of vowels

occurance = {"a":0 , "e":0, "i":0, "o":0, "u":0}

s = input("Enter a string ::")
count = 0
for i in s:
    if i.lower() in occurance.keys():
        occurance[i.lower()] += 1

print("The number of vowels in string ::", occurance)