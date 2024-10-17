#include <stdio.h>

int add(int a, int b);

double multiply(double x, double y);

unsigned long long factorial(int num);

int main () {

    int sum=add(3,7);
    printf("sum is %d \n", sum);

    double product=multiply(4,2);
    printf("product is %.2f \n", product);

    int n=4;
    unsigned long long fact=factorial(n);
    printf("factorial of %d is %llu\n", n, fact);

    return 0;
}

int add(int a, int b){

    int result = a+b;
    return result;
}

double multiply(double x, double y){
    return x*y;
}

unsigned long long factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}


