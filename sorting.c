#include<stdio.h>

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1;++i){
        for(int j=0; j<n-1-i;++j){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void printarray(int arr[], int n){
    for(int i=0; i<n; ++i){
        printf("%d ", arr[i]);
    }
printf("\n");
}


int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]) ;    // n is the no.of elements in the array


    printf("original array is:\n");
    printarray(arr,n);

    bubblesort(arr,n);
    printf("sorted array using bubble sort is:\n");
    printarray(arr,n);


    return 0;
}