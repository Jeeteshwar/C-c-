#include<stdio.h>
int main()
{
int i =63;
int *ptr;
int **ptr_ptr;

ptr=&i;
ptr_ptr=&ptr;
printf("the value of i is %d\n", **ptr_ptr);
printf("the value of ptr is %u\n", &ptr);
printf("the value of ptr_ptr is %u\n", &ptr_ptr);

return 0;
}