#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand(time(0));                         //seeds the random number generator using the current time so that each time you run the program, you get different random numbers
int random_num = rand() % 100 + 1;      //generates a random number between 0 and 99, then adds 1 to shift the range to 1-100.
int guess, attempts;   
    
    do {
        
        printf("make a guess by entering a number(between 1 to 100)\n");
        scanf("%d", &guess);
        attempts++;

            if(guess>random_num){
                printf("Too high\n");
            }
            else if(guess<random_num){
                printf("Too low\n");
            }
            else {
                printf("congragulations! you have guessed it right in %d attempts\n", attempts);
            }
        
    } while(guess!=random_num);
    
    return 0;
}