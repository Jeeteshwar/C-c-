#include<stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;

    }
    return gcd(b ,a%b);
}
int main()
{
int num1,num2;
printf("Enter the num1");
scanf("%d",&num1);
printf("Enter the num2");
scanf("%d",&num2);

int result=gcd(num1,num2);

printf("Gcd of %d and %d is %d",num1,num2,result);
return 0;
}