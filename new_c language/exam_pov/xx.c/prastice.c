#include<stdio.h>
int isleapyear(int n){
    if(n%400==0){
        return 1;
    }
    else if(n%100==0){
        return 0;
    }
    else if(n%4==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
int year=2020;
if(isleapyear(year)){
    printf("%d is leap year\n",year);
}
else{
    printf("not a leap year");
}
return 0;
}