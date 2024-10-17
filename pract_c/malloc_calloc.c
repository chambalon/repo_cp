#include<stdio.h>
#include<stdlib.h>


int main() {

    int *ptr1 = (int*)malloc(5*sizeof(int));

    if(ptr1==NULL){
        printf("memory allocation with malloc failed\n");
        return 1;
    }

    for(int i=0; i<5; i++){
        ptr1[i] = i+1;
        printf("arr1[%d] = %d\n",i,ptr1[i]);
    }
    printf("\n");
    
    free(ptr1);



    int* ptr2 = (int*) calloc(5, sizeof(int));

       if(ptr2==NULL){
        printf("memory allocation with malloc failed\n");
        return 1;
       }

    for(int i=0; i<5; i++){
        printf("arr2[%d] = %d\n",i,ptr1[i]);
    }

    free(ptr2);

    return 0;
}