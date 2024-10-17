#include<stdio.h>
#include<stdlib.h>

// incomplete


int manin(){

    int choice, element, index;

    while(1){

        printf("1.add element\n");
        printf("2.remove element\n");
        printf("3.print list\n");
        printf("4.exit");

        printf("enter your choice:");
        scanf("%d", &choice);
        
    }


    switch(choice) {

        case 1:
            printf("enter the element to add:"):
            scanf("%d", &element);


        case 2:
            printf("enter the index of the element to be removed");
            scanf("%d", &index);


        case 3:


        case 4:
            free();


        default: 
            printf("invalid choice");
    }


printf("");
        printf("");
    return 0;
}