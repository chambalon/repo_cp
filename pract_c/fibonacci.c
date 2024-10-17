#include<stdio.h>

//iterative
int fibonacci_iterative(int n){
    int n1=0, n2=1, nn;
    for(int i=0;i<n;++i){
        printf("%d ", n1);
        nn=n1+n2;
        n1=n2;
        n2=nn;
    }      
}

//recursive
int fibonacci_recursive(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
    }
}


int main() {
    int num;
    printf("enter the number");
    scanf("%d",&num);

    printf("fibonacci recursive sequence:\n");
    for(int i=0;i<num;++i){
        printf("%d ", fibonacci_recursive(i));
    }
    printf("\n");

    printf("fibonacci iterative sequence:\n");
    fibonacci_iterative(num);
    
    return 0;
}