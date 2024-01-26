#include<stdio.h>
int isleapyear(int year){
    if(year%400==0){
        return 1;

    }
    else if(year%100==0){
        return 0;
    }
    else if(year%4==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
int year;
printf("Enter the year :");

scanf("%d",&year);

if(isleapyear(year)){
    printf("\nThe year is a leap year");
}
else{
        printf("\nThe year is not a leap year");

}
return 0;
}