#include<stdio.h>

int main() {

    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit loop when i is 5
        }
        if (i % 2 == 0) {
             continue; // Skip the rest of the loop iteration if i is even and proceeds with the next iteration.
        }
        printf("i = %d\n", i);
    }

    return 0;
}