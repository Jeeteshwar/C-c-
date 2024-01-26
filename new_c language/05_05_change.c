#include<stdio.h>
int area (int one_side , int second_side);
int main()
{

int c;
c = area(25,25);
printf("The are of the square is %d\n", c);
return 0;
}
int area (int one_side , int second_side)
{
int b;
b = one_side*second_side;
return b;
}