#include<stdio.h>
#include<string.h>


union data {
    int i;
    float j;
    char str[50];
};



int main () {

    union data d;
    d.i = 10;
    printf("integer value is: %d\n",d.i);

    d.j = 15.6;
    printf("float value is: %.2f\n",d.j);

    strcpy(d.str, "C programming");
    printf("string value is: %s\n",d.str);

    //demonstrate only one value is valid at a time
    printf("after modification\n");
    d.i = 100;
    printf("integer value is: %d\n",d.i);
    printf("float value is: %.2f\n",d.j);   //invalid
    printf("string value is: %s\n",d.str);  //invalid
    printf("integer value is: %d\n",d.i);

    return 0;
}s