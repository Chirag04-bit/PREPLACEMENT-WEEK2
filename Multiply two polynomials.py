def multiplyPoly(p1, p2):
    res = [0]*(len(p1)+len(p2)-1)
    for i in range(len(p1)):
        for j in range(len(p2)):
            res[i+j] += p1[i]*p2[j]
    return res

p1 = [5,0,10,6]
p2 = [1,2,4]
print(multiplyPoly(p1, p2))
