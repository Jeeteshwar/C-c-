#include<stdio.h>
int main()
{
int sum=0;
for(int i =0; i<=50;i+=3){
sum=sum+i;
}
printf("The sum of even numbers between 0 to 50 is %d",sum);
return 0;
}