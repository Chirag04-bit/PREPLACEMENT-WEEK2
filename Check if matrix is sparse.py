def isSparse(matrix):
    total = len(matrix) * len(matrix[0])
    zeros = sum(row.count(0) for row in matrix)
    return zeros > total / 2

matrix = [[0,0,3],[0,5,0],[0,0,0]]
print(isSparse(matrix))
