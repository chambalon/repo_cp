#include<stdio.h>

int main() {

int numbers[5]={25,10,60,80,35};

printf("2nd value is %d \n", numbers[1]);
numbers[4]=45; 


for(int i=0;i<5;++i){
    printf("%d ", numbers[i]);
}
printf("\n");


int sum=0;
for(int i=0;i<5;++i){
    sum+=numbers[i];
}
printf("sum is %d\n", sum);

float average=sum/5;
printf("average is %.2f\n", average);

int max=numbers[0];
for(int i=1;i<5;++i){
    if(numbers[i]>max){
        max=numbers[i];
    }
}
printf("max value is %d", max);

    return 0;
}