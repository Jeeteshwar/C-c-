#include<stdio.h>
int main()
{
int age; printf("Enter your age\n"); scanf("%d",&age);
char gender='M';
if(age>=18){
    printf("You are an adult\n");
    if (gender=='M'){
        printf("You are a male adult\n");
    }
    else{
        printf("You are a female adult\n");
    }
}
else{
    printf("You are a kiddo!! STAY  AWAY FROM THIS CLUB");
}
return 0;
}