l = ["Harsh", "Asad", "Pratham", "Djay", "John"]
d = {}
for i in l:
    if(len(i) not in d.keys()):
        d[len(i)] = [i]
    #elif(type(d[len(i)]) == type([])):
        #d[len(i)] += [i]
    else:
        #L = []
        #L+=[d[len(i)]]
        #L+=[i]
        #d[len(i)] = L
        d[len(i)] += [i]
        
print(d)
