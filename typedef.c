#include<stdio.h>>
#include<stdlib.h>>
#include<string.h>>


//reating a new typedef alias student
typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;


int main() {
   
    Student s1 = {"Ann Joseph", 20, 3.5};
    Student s2;
 
    strcpy(s2.name, "Crystel James");
    s2.age = 22;
    s2.gpa = 3.8;
   
    printf("Student 1: Name = %s, Age = %d, GPA = %.2f\n", s1.name, s1.age, s1.gpa);
    printf("Student 2: Name = %s, Age = %d, GPA = %.2f\n", s2.name, s2.age, s2.gpa);
    return 0;
}