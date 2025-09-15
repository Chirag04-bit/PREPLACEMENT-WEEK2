#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr = NULL, size = 0, choice, val, pos;
    while(1) {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nChoice: ");
        scanf("%d",&choice);
        if(choice==1) {
            printf("Enter value: "); scanf("%d",&val);
            size++;
            arr = realloc(arr, size*sizeof(int));
            arr[size-1] = val;
        } else if(choice==2) {
            printf("Enter position: "); scanf("%d",&pos);
            if(pos<0 || pos>=size) printf("Invalid\n");
            else {
                for(int i=pos;i<size-1;i++) arr[i]=arr[i+1];
                size--;
                arr = realloc(arr, size*sizeof(int));
            }
        } else if(choice==3) {
            printf("Array: ");
            for(int i=0;i<size;i++) printf("%d ",arr[i]);
            printf("\n");
        } else break;
    }
    free(arr);
    return 0;
}