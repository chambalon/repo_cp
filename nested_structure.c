#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct course {
    char code[50];
    char title[200];
    int credits;
};



struct student {
    char name[100];
    int age;
    struct course crs[4];
};



void displaystudent(struct student s1){

    printf("student name: %s (Age: %d)\n", s1.name, s1.age);

    for(int i=0; i<4; i++){
        printf("course%d: %s(%s) score - %d\n", i+1, s1.crs[i].code, s1.crs[i].title, s1.crs[i].credits);
    }
}


int main() {

    struct student student1 = {
        "Ann Marry", 20,
        {
            {"CS101","Artificial Intelligence",35},
            {"Maths101","Algebra",40},
            {"Physics101","Electromagnetism",37},
            {"ENG101","Literature",35}
        }
    };


    displaystudent(student1);

    return 0;
}