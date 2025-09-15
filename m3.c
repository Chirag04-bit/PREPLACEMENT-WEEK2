#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n], sum=0;
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<n; i++) {
        sum += a[i][i];
        if(i != n-1-i) sum += a[i][n-1-i];
    }
    printf("Sum of diagonals = %d\n", sum);
    return 0;
}