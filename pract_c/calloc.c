#include<stdio.h>>
#include<stdlib.h>



int main() {

    ///allocate memory and initialize all array elements to 0

    int *ptr = (int*)calloc(10,sizeof(int));

    if(ptr==NULL){
        printf("memory allocation failed\n");
        return 1;
    }


    //print array

    for(int i=0;i<10;i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);
    ptr=NULL;

    return 0;
}