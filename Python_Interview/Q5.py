#program to store subject and marks in a dict

n = int(input("Enter the number of records ::"))
d = {}
for i in range(n):
    s = input("Enter the subject ::")
    m = int(input("Enter the marks ::"))
    d[s] = m

print(d)