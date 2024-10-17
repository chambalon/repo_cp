#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct student {
    char name[100];
    int age;
    float gpa;
    char division;
};


int main() {


    struct student s1 = {"Noah James",15,3.5,'A'};
    struct student s2;


    strcpy(s2.name, "Ann Thomas");
    s2.age = 16;
    s2.gpa = 3.7;
    s2.division = 'B';

    printf("before modification\n");
    printf("name:%s, age:%d, gpa:%.1f, division:%c\n", s1.name, s1.age, s1.gpa, s1.division);
    printf("name:%s, age:%d, gpa:%.1f, division:%c\n", s2.name, s2.age, s2.gpa, s2.division);


    s2.age += 1;
    printf("after modification\n");
    printf("name:%s, age:%d, gpa:%.2f, division:%c\n", s2.name, s2.age, s2.gpa, s2.division);


    struct student *ptr = &s1;
    ptr ->gpa = 3.8;
    printf("after modification\n");
    printf("name:%s, age:%d, gpa:%.1f, division:%c\n", ptr -> name, ptr -> age, ptr -> gpa, ptr -> division);

    return 0;
}