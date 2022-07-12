t=int(input())
for i in range(t):
    n=int(input())
    temp=[]
    num=input()
    temp=num.split(" ")
    for i in range(n):
        s=input()
        for j in s[2:]:
            if(j=="U"):
                temp[i]=(int(temp[i])-1)%10
            else:
                temp[i]=(int(temp[i])+1)%10            
    for i in range(len(temp)):
        print(temp[i],end=" ")
    print("\n")
        
