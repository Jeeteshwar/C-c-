#include<stdio.h>
int main()
{
    int marks;
    
        printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks>100){
            printf("Don't try to be over smart, enter the value in the limit\n");
    }
    else
    {
       switch(marks/10)
    {
        case 10:
        case 9:
            printf("Dear student,Your Grade is A\n");
            break;
        case 8:
            printf("Dear student,Your Grade is B\n");
            break;
        case 7:
            printf("Dear student,Your Grade is C\n");
            break;
        case 6:
            printf("Dear student,Your Grade is D\n");
            break;
        case 5:
            printf("Dear student,Your Grade is E\n");
            break;
        case 4:
            printf("Dear student,Your Grade is E--\n");
            break;   

        default:
            printf("Dear Student You Are Failed\n");;
            break;

    }
    }
    return 0;
}