#include<stdio.h>

int main() {

    int array[] = {10, 20, 30, 40, 50};
    int *ptr = array;   // pointer initializted to the start of the array
    
    printf("frst value: %d \n", *ptr);
    
    ptr++;              // move to next location
    printf("after increment value: %d\n", *ptr);
    
    ptr--;
    printf("after decrement value: %d\n", *ptr);
    
    printf("fifth value: %d\n", *(ptr+4));


    return 0;
}