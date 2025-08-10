n, q = map(int, input().split())
seqList = [[] for _ in range(n)]
lastAns = 0

for _ in range(q):
    t, x, y = map(int, input().split())
    idx = (x ^ lastAns) % n
    if t == 1:
        seqList[idx].append(y)
    else:
        lastAns = seqList[idx][y % len(seqList[idx])]
        print(lastAns)
