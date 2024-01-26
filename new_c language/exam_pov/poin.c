#include<stdio.h>
int main()
{
int num=5;
int *ptr=&num;
int **ptr2=&ptr;
printf("The value of num: %d",num);
printf("The value of *ptr: %p",ptr);

printf("The value of num: %p",ptr2);

printf("The value of pointed: %d",*ptr);
printf("The value of pointed: %d",**ptr2);


return 0;
}