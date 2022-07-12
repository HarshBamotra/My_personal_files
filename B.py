n=int(input())
for i in range(n):
    x=int(input())
    s=input()
    score=0
    temp=[]
    for j in s:
        if j not in temp:
            score+=2
            temp.append(j)
        else:
            score+=1
    print(score)
