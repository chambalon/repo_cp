#include<stdio.h>

void main(){
    static int local_var = 0;
    local_var++;
    printf("%d\n", local_var);
}