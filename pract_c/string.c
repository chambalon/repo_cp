#include<stdio.h>
#include<string.h>

int main() {

    char str[20]="hello";

    int len= strlen(str);
    printf("length is %d\n",len);



    char str2[20];
    strcpy(str2,str);
    printf("copied string str2=  %s\n",str2);
    printf("str = %s\n",str);



    strcat(str2,",world");
    printf("concatinated string st2 = %s\n",str2);



    char str3[]="hello,world";
    int cmp = strcmp(str2,str3);
    if (cmp>0){
        printf("str2 is greater than str3\n");
    }else if(cmp<0){
        printf("str2 is less than str3\n");
    }else{
        printf("str2 is eaqual to str3\n");
    }



    char strx[100],rev[100];

    printf("enter a string: ");
    gets(strx);

    printf("strx is: %s\n", strx);
    int ln = strlen(strx);

    for(int i=0;i<ln;++i){
        rev[i] = strx[len-i-1];
    }
    rev[len] = '\0';

    printf("rev is: %s\n", rev);


    if(strcmp(rev,strx)==0){
        printf("string is most defenetly a palindrome\n");
    }
    else{
        printf("string is not a palindrome\n");
    }
    

    return 0;
}