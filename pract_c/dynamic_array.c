#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;
    printf("enter the no.of element: ");
    scanf("%d", &n);


    int *arr = (int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("memory allocation failed\n");
        return 1;
    }


    printf("enter the %d elements:",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }

    printf("elements entered are: " );
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}