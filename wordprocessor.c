#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void  createfile(const char *filename){
    FILE *fptr = fopen(filename,"w");
    if(fptr==NULL){
        printf("error creating the file\n");
        return;
    }
    printf("file %s has been ceated successfully\n",filename);
    fclose(fptr);
}


void readfile(const char *filename){
    FILE *fptr = fopen(filename,"r");
    if(fptr==NULL){
        printf("error reading the file\n");
        return;
    }

    char ch;
    while((ch=fgetc(fptr) )!= EOF){
        putchar(ch);
    }
    fclose(fptr);
}



void  writefile(const char *filename){
    FILE *fptr = fopen(filename,"a");
    if(fptr==NULL){
        printf("error writing to file\n");
        return;
    }

    char text[300];
    printf("enter the text to be written to the file. Type 'end' to finish.\n");
    while(1){
        if(fgets(text, sizeof(text),stdin)==NULL){
            printf("error reading the input\n");
            break;
        }

        text[strcspn(text,"\n")] = 0;

        if(strcmp(text,"end") == 0){
            break;
        }

        fputs(text,fptr);
        fputs("\n",fptr);
    }
    fclose(fptr);
}



int main() {

    int choice;
    char filename[50];

    printf("Simple text editor\n");
    printf("1.create a new file\n");
    printf("2.read from the file\n");
    printf("3.write to file\n");
    printf("4.exit\n");


    while(1){

        printf("Enter your choice:");
        scanf("%d", &choice);
        getchar();

        switch(choice){

            case 1:  
                    printf("enter the filename to create file:\n");
                    scanf("%s",filename);
                    getchar();

                    createfile(filename);
                break;


            case 2: 
                    printf("enter the filename to read:\n");
                    scanf("%s",filename);
                    getchar(); 

                    readfile(filename);
                break;


            case 3:  
                    printf("enter the filename to write:\n");
                    scanf("%s",filename);
                    getchar(); 

                    writefile(filename);
                break;

            case 4:  
                exit(0);

            default:
                printf("invalid choice\n");

        }
    }
    return 0;
}