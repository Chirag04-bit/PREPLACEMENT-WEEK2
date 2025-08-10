def addPoly(p1, p2):
    n = max(len(p1), len(p2))
    p1 += [0]*(n-len(p1))
    p2 += [0]*(n-len(p2))
    return [p1[i] + p2[i] for i in range(n)]

p1 = [5,0,10,6]  # 5 + 0x + 10x² + 6x³
p2 = [1,2,4]     # 1 + 2x + 4x²
print(addPoly(p1, p2))
