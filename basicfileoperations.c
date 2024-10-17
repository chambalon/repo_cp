#include<stdio.h>

int main() {

    FILE *writeptr = fopen("example.txt", "w");
    if(writeptr == NULL){
        perror("error opening file for writing\n");
        return -1;
    }
    fprintf(writeptr, "c programming\n");
    fclose(writeptr);


    FILE *appendptr = fopen("example.txt", "a");
    if(appendptr == NULL){
        perror("error opening file for appending\n");
        return -1;
    }
    fprintf(appendptr, "This line was appended\n");
    fclose(appendptr);



    FILE *readptr = fopen("example.txt", "r");
    if(readptr == NULL){
        perror("error opening file for reading\n");
        return -1;
    }

    char buffer[300];
    printf("data read from textfile:\n");
    while(fgets(buffer,sizeof(buffer),readptr)){
        printf("%s", buffer);
    }
    fclose(readptr);



//binary file

    int data[5] = {1,2,3,4,5};
    FILE *binwriteptr = fopen("binary.dat","wb");
    if(binwriteptr == NULL){
        perror("error opening file for writing\n");
        return -1;
    }
    fwrite(data,sizeof(int),5,binwriteptr);
    fclose(binwriteptr);


    int read_data[5];
    FILE *binreadptr = fopen("binary.dat","rb");
    if(binreadptr == NULL){
        perror("error opening file for reading\n");
        return -1;
    }
    fread(read_data, sizeof(read_data),5,binreadptr);
    fclose(binreadptr);

    printf("\ndata read from the binary file:\n");
    for(int i=0; i<5; ++i){
        printf("%d", read_data[i]);
    }
    printf("\n");

    return 0;
}