def is_identity(matrix):
    rows = len(matrix)
    cols = len(matrix[0])

    # It must be a square matrix
    if rows != cols:
        return False

    for i in range(rows):
        for j in range(cols):
            if i == j and matrix[i][j] != 1:
                return False
            elif i != j and matrix[i][j] != 0:
                return False
    return True

# Example usage
mat = [[1,0,0],[0,1,0],[0,0,1]]
print(is_identity(mat))  # True
