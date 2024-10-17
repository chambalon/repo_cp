#include<stdio.h>

int main() {


    FILE  *fptr = fopen("studentdata.txt", "r");
    if(fptr==NULL){
        fprintf(stderr,"error opening the file\n");
        return 1;
    }

    char name[50];
    int age;
    while(fscanf(fptr,"%s %d",name, &age)==2){
        printf("name:%s, age:%d\n", name, age);
    }
 

   if(ferror(fptr)) {
        fprintf(stderr,"error reading file\n");
    }
    else if(feof(fptr)) {
        printf("end of file\n");
    }

    fclose(fptr);
    return 0;
}