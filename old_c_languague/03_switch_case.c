#include<stdio.h>
int main()
{
    int rating;
    printf("Enter your rating(1-5)\n");
    scanf("%d",&rating);
    switch(rating){
        case 1:
            printf("Thanks for rating us with 1\n");
            break;
        case 2:
            printf("Thanks for rating us with 2\n");
            break;
        case 3:
            printf("Thanks for rating us with 3\n");
            break;
        case 4:
            printf("Thanks for rating us with 4\n");
            break;
        
        default:
            printf("Invalid rating!\n");
            break;
    }
return 0;
}