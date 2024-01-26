// #include<stdio.h>
// int main()
// {
//   int num,reverse;
//   printf("Enter the number you want to reverse\n");
//   scanf("%d",&num);
//   int input=num;
//   while(num>0){
//     reverse=reverse*10+num%10;
//     num=num/10;

//   }
//   printf("The result is [input=%d] [output=%d]",input,reverse);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int decimal,binary=0,base=1;
// printf("Enter the number whose binary format  you want\n");
// scanf("%d",&decimal);
// int input=decimal;
// while(decimal>0){
//     binary+=(decimal%2)*base;
//     decimal/=2;
//     base*=10;
// }
// printf("The binary of %d is %d\n",input,binary);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int num,digit,sum=0;
// printf("Enter the number whose digit's sum you want\n");
// scanf("%d",&num);
// int input=num;
// while(num!=0){
//     digit=num%10;
//     sum=sum+digit;
//     num=num/10;
// }
// printf("The sum of the digits %d is %d",input,sum);
// return 0;
// }

#include<stdio.h>
int fibonnacci(int n){
    if(n==0|| n==1){
        return n;

    }
    else{
        return fibonnacci(n-1)+fibonnacci(n-2);
    }
}
int main()

{
int terms;
printf("ENTER THE TERMS TILL YOU WANT THIS CODE TO RUN");
scanf("%d",&terms);
for(int i=0;i<terms;i++){
    printf("%d ",fibonnacci(i));
}
return 0;
}