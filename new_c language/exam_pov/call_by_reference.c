#include<stdio.h>
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("The swap inside of the function a = %d b = %d",a,b);

}
int main()
{
int a,b;
printf("Enter the value for Var a\n");
scanf("%d",&a);
printf("Enter the value for Var b\n");
scanf("%d",&b);

printf("The value before function call [a=%d] [b=%d]\n",a,b);


swap(a,b);

printf("\nThe value after function call [a=%d] [b=%d]\n",a,b);

return 0;
}