// #include<stdio.h>
// void main()
// {
//     int i,sum=0,n;
//     printf("Enter the value of n\n");
//     scanf("%d",&n);

//         for(i=0; i<=n; i++){
//             sum +=i;
//             }
//             printf("The value of sum (1 to 50) is: %d\n",sum);

        
//         }


#include<stdio.h>
int main()
{
int age, marks;
printf("Enter the your age:\n");
scanf("%d",&age);
printf("Enter the your marks:\n");
scanf("%d",&marks);

switch (age)
{
    case 3:
        printf("The age is 3\n");
        switch(marks)
        {
            case 45:
                printf("Your marks are 45\n");
                break;
            default:
                printf("Your marks are not 45\n");
                break;
        }
    default:
        printf("Your age is not 3\n");
        break;
    
    

}
return 0;
}