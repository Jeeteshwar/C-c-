// #include<stdio.h>
// int main()
// {
// int a=234;
// int *ptr=&a;
// printf("The value of i is %u\n",ptr);
// ptr=ptr+1;
// printf("The value of i is %u\n",ptr);
// return 0;
// }

#include<stdio.h>
int main()
{
char a=25;
char *ptr=&a;
printf("The value of a is %u\n", ptr);
ptr++;
printf("The value of a is %u\n", ptr);

return 0;
}