#include <stdio.h>
struct poly { int coeff; int pow; };
int main() {
    int n,m;
    printf("Enter number of terms in polynomial 1: ");
    scanf("%d",&n);
    struct poly p1[n];
    printf("Enter coeff and power for each term:\n");
    for(int i=0;i<n;i++) scanf("%d %d",&p1[i].coeff,&p1[i].pow);
    printf("Enter number of terms in polynomial 2: ");
    scanf("%d",&m);
    struct poly p2[m];
    printf("Enter coeff and power for each term:\n");
    for(int i=0;i<m;i++) scanf("%d %d",&p2[i].coeff,&p2[i].pow);
    printf("Result: ");
    int i=0,j=0;
    while(i<n && j<m){
        if(p1[i].pow == p2[j].pow) {
            printf("%dx^%d ", p1[i].coeff+p2[j].coeff, p1[i].pow);
            i++; j++;
        } else if(p1[i].pow > p2[j].pow) {
            printf("%dx^%d ", p1[i].coeff, p1[i].pow); i++;
        } else {
            printf("%dx^%d ", p2[j].coeff, p2[j].pow); j++;
        }
    }
    while(i<n) { printf("%dx^%d ", p1[i].coeff, p1[i].pow); i++; }
    while(j<m) { printf("%dx^%d ", p2[j].coeff, p2[j].pow); j++; }
    return 0;
}