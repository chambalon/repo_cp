#include<stdio.h>
#include<stdlib.h>


int main() {

//memory allocated for array of 10nintegers

int *ptr = (int*) malloc(10* sizeof(int));

    if(ptr==NULL){
        printf("memory allocation failed\n");
        return 1;
    }


// giving a number/value to actual pointers and assigning values to array elements ; ptr[0-9] as ptr[0]=1,ptr[1]=2....ptr[9]=10

for(int i=0; i<10; i++){
    ptr[i] = i+1;
}


//printing the array


for(int i=0; i<10; i++){
    printf("%d ",ptr[i]);
}


// deallocating memory
    free(ptr);

    return 0;
}