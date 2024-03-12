#Program to reverse the letters of a word

s = input("Enter a string ::") 
result = ""
for i in s.split(" "):
    rev = i[::-1]
    pre = rev[0].upper() + rev[1:-1] + rev[-1].upper() + " "
    result += pre

print("The string after conversion ::", result)


