#include<stdio.h>

int main() {

    FILE *fptr;
    int arr[5] = {1,2,3,4,5};
    int read_arr[5];


    fptr = fopen("data.bin", "wb");
    if(fptr == NULL){
        perror("error opening file for writing\n");
        return 1;
    }

    fwrite(arr,sizeof(int),5,fptr);
    fclose(fptr);


    fptr = fopen("data.bin", "rb");
    if(fptr == NULL){
        perror("error opening file for reading\n");
        return 1;
    }
    fread(read_arr,sizeof(int),5,fptr);
    fclose(fptr);

    printf("data read from the binary file:\n");
    for(int i=0; i<5; i++){
        printf("%d", read_arr[i]);
    }

    return 0;
}