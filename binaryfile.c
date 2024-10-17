#include<stdio.h>
#include<stdio.h>


int main () {

    FILE *fptr = fopen("data.bin","wb");
    if(fptr == NULL){
        perror("error opening the file\n");
        return -1;
    }


    int arr[5] = {1,2,3,4,5};


    size_t written = fwrite(arr, sizeof(int),5,fptr);
    if(written !=5){
        perror("error writing to file\n");
    }

    fclose(fptr);

    return 0;
}