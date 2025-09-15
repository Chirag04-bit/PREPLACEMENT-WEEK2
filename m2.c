#include <stdio.h>
int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            b[j][n-1-i] = a[i][j];
    printf("Matrix after 90 degree rotation:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }
    return 0;
}