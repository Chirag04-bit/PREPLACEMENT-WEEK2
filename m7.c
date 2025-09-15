#include <stdio.h>
struct poly { int coeff; int pow; };
int main() {
    int n,m;
    printf("Enter number of terms in poly1: ");
    scanf("%d",&n);
    struct poly p1[n];
    for(int i=0;i<n;i++) scanf("%d %d",&p1[i].coeff,&p1[i].pow);
    printf("Enter number of terms in poly2: ");
    scanf("%d",&m);
    struct poly p2[m];
    for(int i=0;i<m;i++) scanf("%d %d",&p2[i].coeff,&p2[i].pow);
    int res[100]={0};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            res[p1[i].pow + p2[j].pow] += p1[i].coeff * p2[j].coeff;
    printf("Result: ");
    for(int i=99;i>=0;i--)
        if(res[i]!=0) printf("%dx^%d ", res[i], i);
    return 0;
}