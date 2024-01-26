#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int number,guess;
srand(time(0));
number=rand()%100+1;
printf("The random number is %d\n", number);
do {
    printf("Guess the number between 1 to 100\n");
    scanf("%d,&guess");
    if (guess>number){
        printf("The guessed number is lower);
    }
    else if(guess<number){
        printf("Guess a bit higher");

    } 
    while{};
    }
    
}
return 0;
}