#include<stdio.h>
int main()
{
int a,b;
char c;
printf("Enter two integers and the operator\n");
scanf("%d %d %c", &a,&b,&c);
switch (c)
{
case '+':
printf("Addition is: %d \n", a+b);
    break;
case '-':
printf("The Subtraction is: %d \n", a-b);
    break;
case '*':
printf("The Multiplication is : %d \n", a*b);
    break;
case '/':
printf("The Division is : %f \n", (float)a/b);
    break;
default:
printf("The input is invalid");

}


return 0;
}

//Tip of the day always check the syntax before running the code//
