#include<stdio.h>
#include<ctype.h>


int main() {

    FILE *fptr;
    char filename[100];
    char ch;
    int characters=0, lines=0, words=0;


    printf("enter the filename:");
    scanf("%s", filename);

    fptr = fopen(filename,"r");
    if(fptr == NULL){
        perror("error opening file %s\n");
        return 1;
    }

    while((ch=fgetc(fptr))!= EOF){
        characters++;
        if(ch == ' ' || ch == '\n' || ch == '\t' || ch == '\0'){
            words++;
        }
        if(ch == '\n' || ch == '\0'){
            lines++;
        }
    }
    fclose(fptr);

    printf("no.of characters:%d\n",characters);
    printf("no.of liness:%d\n",lines);
    printf("no.of words:%d\n",words);

    return 0;
}