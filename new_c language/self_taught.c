/*
#include <stdio.h>
void main()
{     
    int i;
	for (i=1;i<=10;i++)
	{      
		printf("The count of natural num is :%d\n ",i);
	}
printf("\n");
}
*/
// factorial code
/*
#include<stdio.h>
int main()
{
int i,num,fact=1;
printf("Enter the number \n");
scanf("%d", &num);
for (i=1;i<=num;i++){
    fact=fact*i;

}
printf("The factorial of %d is %d\n",num,fact);
return 0;
}
*/
// #include<stdio.h>
// int main()
// {
// int i, sum=0;
// for(i=1; i<=10;i++){
//     sum=sum+i;
//     printf("%d\n",i);
// }
// printf("The sum is %d\n", sum);
// return 0;
// }

//Write a program in C to display n terms of natural number and their sum.Go to the editor
//Test Data : 7

// #include<stdio.h>
// int main()
// {
// int i, sum=0;
// for(i=1; i<=7;i++){
//     sum+=i;
//     printf("%d\n",i);
// }
// printf("The sum is %d\n", sum);
// return 0;
// }




// #include<stdio.h>
// int main()
// {
// int i,n,sum=0;
// float avg;
// printf("Enter the 10 Number in sequence\n");
// for(i=1;i<=10;i++){
//     printf("Number :- %d\n",i);
//     scanf("%d",&n);
//     sum+=n;

// }
// avg=sum/10.0;
// printf("The sum of the input is : %d\nThe Average of the input is %f\n", sum,avg);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int i,cube;
// printf("Enter the number upto you want cube of \n");
// scanf("%d", &cube);
// for(i=1;i<=cube;i++){
//     printf("The Input number is :%d and the cube of :%d is %d\n",i,i,(i*i*i));
// }
// return 0;
// }
// #include<stdio.h>
// int main()
// {
// int i,n;
// printf("Input the number (Table to be calculated)\n");
// scanf("%d",&n);
// for(i=1;i<=10;i++){
//     printf("%d x %d is %d\n",n,i,n*i);
// }
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int i,j,n;
// printf("Enter the number of sequence you want\n");
// scanf("%d", &n);
// printf("Multiplication from 1 to %d \n",n);
// for (i=1; i<=10;i++){
//     for(j=1;j<=n;j++){
//         printf("%dx%d = %d ",j,i,(j*i));

//     }
//     printf("\n");
// }
// return 0;
// }

#include <stdio.h>
int main()
{
   int i,n,sum=0;

   printf("Input numbers of term are ");
   scanf("%d",&n);
   printf("The odd numbers are ");
   for(i=1;i<=n;i++);
   {
        printf("%d", 2*i-1);
        sum+=2*i-1;
   }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
return 0;
}