#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
    char name[50];
    int quantity;
    float price;
}product;


void addproduct(product products[], int *count, char *name, int quantity, float price){
    strcpy(products[*count].name, name);
    products[*count].quantity = quantity;
    products[*count].price = price;
    (*count)++;

}


void displayproduct(product products){
    printf("name:%s\n", products.name);
    printf("quantity:%d\n", products.quantity);
    printf("price:%.2f\n", products.price);
    printf("\n");
}


void updateproduct(product *products, char *name, int quantity, float price){
    strcpy(products->name, name);
    products-> quantity = quantity;
    products-> price = price;
}


void deleteproduct(product products[], int index, int *count){
    /*if (index < 0 || index >= *count){
        printf("invalid\n");
        return;
    }*/
    
    for(int i=index; i<*count; i++){
        products[i] = products[i+1];
    }
    (*count)--;
}


int main() {

    product products[100];
    int count = 0;

    addproduct(products, &count, "Laptop", 10, 1600);
    addproduct(products, &count, "Smartphone", 25, 650);


    printf("products:\n");
    for(int i=0; i<count; i++){
        displayproduct(products[i]);
    }


    updateproduct(&products[1],"Smartphone",20,600);

    deleteproduct(products, 1, &count);


    printf("products after update:\n");
    for(int i=0; i<count; i++){
        displayproduct(products[i]);
    }

    return 0;
}

