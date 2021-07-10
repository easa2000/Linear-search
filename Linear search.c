// Linear search

#include<stdio.h>
void main(){
    int n, i, A[20], num, pos=-1, found=0;

    printf("\n Enter the number of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter the %d element: ",i+1);
        scanf("%d",&A[i]);
    }

    printf("\n Enter the element to be search: ");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(A[i] == num){
            found = 1;
            pos= i;
            printf("\n %d is found at the position of %d.",num,i+1);
            break;
        }
    }

    if(found == 0){
        printf("\n the %d element was not found..",num);
    }
}
