#include<stdio.h>
int main()
{
int n1,n2,n3;
float avg;
printf("Enter the values");
scanf("%d %d %d",&n1,&n2,&n3);
avg=(float)(n1+n2+n3)/3;
printf("The avg of %d , %d and %d is %.2f", n1,n2,n3,avg);
return 0;
}