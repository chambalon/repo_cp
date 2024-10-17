#include <stdio.h>

unsigned long long factorial(int n);

int main() {

    //int num=4;
    //for(int i=0;i<=10;++i){
    //   printf("factorial of %d is %llu \n", i, factorial(i));
    //}
    
    int num;
    printf("enter a number: \n");
    scanf("%d", &num);
    printf("factorial of %d is %llu \n", num, factorial(num));
    return 0;
}

unsigned long long factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
    
}

   