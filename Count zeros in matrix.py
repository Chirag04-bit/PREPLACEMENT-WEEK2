mat = [[1,0,3],[0,0,6],[7,8,0]]
count = 0
for row in mat:
    for val in row:
        if val == 0:
            count += 1
print("No of zeros:",count) 
