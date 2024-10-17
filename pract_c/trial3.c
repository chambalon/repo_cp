#include <stdio.h>

void myFunction() {
    static int staticVar = 0; // staticVar retains its value between calls
    staticVar++;
    printf("staticVar: %d\n", staticVar);
}

int main() {
    myFunction(); // staticVar is 1
    myFunction(); // staticVar is 2
    myFunction(); // staticVar is 3
    return 0;
}