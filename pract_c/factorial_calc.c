#include<stdio.h>

//itarative method
int factorial_iterative(int num){
    int result=1;
    for(int i=1;i<=num;++i){
        result*=i;
    }
    return result;
}

//recursive method

int factorial_recursive(int num){
    if(num==0){
        return 1;
    }
    else{
        return num*factorial_recursive(num-1);
    }
}

int main() {
    int n;
    printf("enter a number:");
    scanf("%d", &n);

    printf("iterative factorial of %d is %d\n", n, factorial_iterative(n));
    printf("recursive factorial of %d is %d\n", n, factorial_recursive(n));

    return 0;
}