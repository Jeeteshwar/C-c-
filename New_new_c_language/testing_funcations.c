// #include<stdio.h>
// int sum(int a, int b){
// int c;
// c=a+b;
// printf("The result is %d\n", c);
// }
// int main()
// {
// int result;
// result=sum(250,20);
// return 0;
// }
#include<stdio.h>
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }

    else{
        return n*factorial(n-1);
    }
    }
int main()
{
int num;
printf("Enter a number\n"); scanf("%d", &num);
printf("The factorial of %d is %d\n", num, factorial(num));
return 0;
}