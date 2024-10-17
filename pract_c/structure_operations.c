#include<stdio.h>
#include<stdlib.h>
#include<string.h>



struct book {
    char title[100];
    char author[100];
    int year;
    float price;

};


void displaybook(struct book b1){

    printf("Title:%s\n",b1.title);
    printf("author:%s\n",b1.author);
    printf("yesr:%d\n",b1.year);
    printf("price:%.2f\n",b1.price);

}



/*void updatebook(struct book b, char title, char author, int year, float price){

strcpy(b.title, title);
strcpy(b.author, author);
b.year = year;
b.price = price;

}*/



void updatebook(struct book *b, char *title, char *author, int year, float price){

strcpy(b->title, title);
strcpy(b->author, author);
b->year = year;
b->price = price;

}



int main() {

    struct book book1;

    updatebook(&book1,"The C Programming Language","Brian W. Kernighan, Dennis M. Ritchie", 1978, 78.50);
  
    displaybook(book1);

    return 0;
}