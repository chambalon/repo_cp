#include <stdio.h>

    int main() {

        float celsius, fahrenheit;
        int choice;

        printf("temperature menu: \n");
        printf("1.celsius to fahrenheit\n");
        printf("2.fhrenhei to celsius\n");
        printf("enter your choice:\n");
        scanf("%d", &choice);

        if (choice==1) {
            printf("enter temperature in celsius\n");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9/5) + 32;
            printf("%.2f celsius is %.2f fahrenheit\n", celsius, fahrenheit);
        }
        else if (choice==2) {
            printf("enter temperature in fahrenheit\n");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit-32) * 5/9;
            printf("%.2f fahrenheit is %.2f celsius\n", fahrenheit, celsius);
        }
        else{
            printf("Invalid choice! enter 1 or 2\n");
        }

        return 0;

    }