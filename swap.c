#include<stdio.h>

void swap(int *x, int *y){

    int temp = *x;
        *x = *y;
        *y = temp;
    //printf("%d, %d\n", x,y);
}


int main() {

    int a=5, b=10;
    printf("values before swap. a=%d, b=%d\n", a,b);

    swap(&a,&b);
    printf("values after swap. a=%d, b=%d\n", a, b);

    return 0;

}