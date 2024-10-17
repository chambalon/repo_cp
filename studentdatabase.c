#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
    char name[50];
    int age;
    float gpa;
}student;


void addstudent(student students[], int *count, char *name, int age, float gpa){
    strcpy(students[*count].name, name);
    students[*count].age = age;
    students[*count].gpa = gpa;
    (*count)++;
}

void displaystudent(student students) {
    printf("name:%s\n", students.name);
    printf("age:%d\n", students.age);
    printf("gpa:%.2f\n",students.gpa);
}


void updatestudent(student *s, char *name, int age, float gpa) {
    strcpy(s->name, name);
    s-> age;
    s-> gpa;
}


void deletestudent (student s[], int *count, int index){
    /*if (index < 0 || index >= *count){
        printf("invalid\n");
        return;
    }*/

    for(int i=index; i< *count-1; i++){
        s[i] = s[i+1];
    }
    (*count)--;
}



int main() {

    student students[120];
    int count = 0;

    addstudent(students, &count,"Crystal Joseph",15,3.5);
    addstudent(students, &count,"Noah James",15,3.7);

    printf("Students:\n");
    for(int i=0; i<count; i++){
        displaystudent(students[i]);
    }

    updatestudent(&students[0],"Ann Martin",16,3.8);
    deletestudent(students, &count, 0);

    printf("\nAfter the update\n");
    for(int i=0; i<count; i++){
        displaystudent(students[i]);
    }
    
    return 0;
}