#include<stdio.h>


struct{
    unsigned int id:3;
    unsigned int age:4;
    unsigned int grade:9;
}student1, student2;



int main (){

    student1.id = 2;
    student1.age = 16;   //exceeds the 4-bit range(0-15), demonstrating how overflow will affect storage.
    student1.grade = 115;


    student2.id = 3;
    student2.age = 15;
    student2.grade = 102;

printf("student1: Id - %u, age - %u, grade - %u\n", student1.id, student1.age, student1.grade);
printf("student2: Id - %u, age - %u, grade - %u", student2.id, student2.age, student2.grade);



    return 0;
}