#include<stdio.h>
#include<time.h>


void logdata(const char *filename, const char *sensordata){
    FILE *fptr = fopen(filename,"a");
    if(fptr==NULL){
        printf("error opening the file for appending\n");
    return;
    }

    time_t now = time(NULL);
    fprintf(fptr,"%s - %s\n", ctime(&now), sensordata);
    fclose(fptr);
}



void readlogdata(const char *filename){
    FILE *fptr = fopen(filename,"r");
    if(fptr==NULL){
        printf("error opening the file for reading\n");
    return;
    }

    char lines[100];
    while(fgets(lines,sizeof(lines),fptr)){
        printf("%s",lines);
    }
    fclose(fptr);
}



int main() {

    const char *filename = "logdata.txt";

    logdata(filename,"temperature: 23.6C");
    logdata(filename,"humidity: 55%");


    printf("log data:\n");
    readlogdata(filename);

    return 0;
}