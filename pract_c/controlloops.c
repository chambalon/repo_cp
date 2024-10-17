#include <stdio.h>

int main() {
    
    printf("10 numbers\n");
    for(int i=1; i<=10; i++){
        printf("%d\n", i);
    }


    printf("factorial calculation\n");
    int num,count=2;
    unsigned long long fact=1;
    printf("check2\n");
    printf("enter an integer to find it's factorial\n", num);
    scanf("%d", &num);
    while(count<=num){
        fact*=count;
        count++;
    }
    printf("factorial of %d is %llu\n", num,fact);



    printf("accepts positive numbers, terminates when negative value is entered\n");

    int n;
    do{
        printf("enter a number:\n");
        scanf("%d", &n);
    }while(n>0);
        
    printf("you entered a negative number %d\n", n);

    return 0;
}