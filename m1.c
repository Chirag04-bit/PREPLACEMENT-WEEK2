#include <stdio.h>
int main() {
    int n, m;
    printf("Enter rows and cols: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter matrix elements:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &a[i][j]);
    int top=0, bottom=n-1, left=0, right=m-1;
    printf("Spiral order: ");
    while(top<=bottom && left<=right) {
        for(int i=left; i<=right; i++) printf("%d ", a[top][i]);
        top++;
        for(int i=top; i<=bottom; i++) printf("%d ", a[i][right]);
        right--;
        if(top<=bottom) {
            for(int i=right; i>=left; i--) printf("%d ", a[bottom][i]);
            bottom--;
        }
        if(left<=right) {
            for(int i=bottom; i>=top; i--) printf("%d ", a[i][left]);
            left++;
        }
    }
    return 0;
}