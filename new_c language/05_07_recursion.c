// #include<stdio.h>
// int main()
// {
// int i,fact=1,number;   
// printf("Enter the number: \n");
// scanf("%d", &number);
// for(i=1;i<=number;i++){
//     fact=fact*i;
// }
// printf("The Factorial of %d is: %d:", number, fact);
// return 0;
// }


#include<stdio.h>
int factorial(int x);
int main()
{
int a;
printf("Enter the value of a: \n");
scanf("%d", &a);
printf("The factorial of %d is %d",a , factorial(a));
return 0;
}
int factorial(int x){
    printf("Calling factorial(%d)\n", x);
    if (x==1 || x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}