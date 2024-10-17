#include <stdio.h>

int main() {

    // 1
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    //2
    int j=0;

    while(j<5){
        printf("%d\n", j);
        j++;
    }

    //3
    int k=0;
    do{
        printf("%d\n", k);
        k++;
    }
    while(k<5);

    return 0;
}
