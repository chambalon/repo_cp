#include <stdio.h>

int main() {

    char oper;
    double num1,num2;

    printf("enter an operator(+, -, *, /, %) :\n");
    scanf("%c", &oper);
    printf("enter two numbers:\n");
    scanf("%lf %lf", &num1, &num2);

    switch(oper) {

        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1+num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1-num2);
            break; 

        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1*num2);
            break; 

        case '/':
            if(num2!=0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1/num2);
            else
                printf("zero division error\n");
            break;
        
        case '%':
            if((int)num2!=0)
                printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            else
                printf("zero division error\n");
            break;

        default:
            printf("Error! invalid operator\n");
            break;

    }

    return 0;

}