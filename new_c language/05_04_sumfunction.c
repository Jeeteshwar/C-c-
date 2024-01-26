#include<stdio.h>
int mul (int a , int b);

int main()
{
    int c;
    c = mul(40,3);
    printf("The value of the given expression is %d\n", c);


return 0;
}
int mul (int a , int b )
{
int c;
c = a*b;
return c;
}