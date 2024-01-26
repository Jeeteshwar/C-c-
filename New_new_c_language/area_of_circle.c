#include<stdio.h>
int main()
{
float radius,area;
printf("Enter the radius of the circle\n");
scanf("%f",&radius);
area= 3.1415926 *radius *radius;
printf("The area of the radius %.2f is %.2f\n",radius,area);
return 0;
}