 #include<stdio.h>
 
 int main (){

    int matrix[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    printf("%d\n",matrix[3][3]);

    printf("%d \n", matrix[1][2]);
    matrix[3][0]=2;

    for (int i = 0; i < 4; i++) {            
        for (int j = 0; j < 4; j++) { 
        printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }
    

    return 0;
 }