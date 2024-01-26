#include<stdio.h>
void swap(int *a, int*b);
int main()
{
int x;
int y;
printf("Enter the value of x \n");
scanf("%d",&x);
printf("Enter the value of y \n");
scanf("%d",&y);

printf("The value of x and y before the swap is %d and %d\n", x,y);
swap(&x,&y);
printf("The value of x and y after the swap is %d and %d\n", x,y);

return 0;
}
void swap(int *a, int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
