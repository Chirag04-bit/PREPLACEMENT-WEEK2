#include <stdio.h>
int main() {
    int n, m, count=0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]==0) count++;
        }
    if(count > (n*m)/2) printf("Matrix is sparse\n");
    else printf("Matrix is not sparse\n");
    return 0;
}