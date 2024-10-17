#include<stdio.h>

int add(int x, int y){
    int result=x+y;

    return result;
}


int main() {

int sum=add(2,5);
printf("sum is %d", sum);

printf("******************************");

    return 0;
}