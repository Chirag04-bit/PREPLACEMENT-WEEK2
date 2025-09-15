#include <stdio.h>
int main() {
    int n, m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    printf("Transpose:\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}