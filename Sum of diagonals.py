matrix = [[1,2,3],[4,5,6],[7,8,9]]
n = len(matrix)
main = sum(matrix[i][i] for i in range(n))
secondary = sum(matrix[i][n-i-1] for i in range(n))
print("Sum of main and secondary diagonal:", main+secondary )


