// #include<stdio.h>
// float avg(int a, int b, int c);
// int main()
// {
// int a,b,c;
// printf("Enter the three number:\n");
// scanf("%d %d %d", &a,&b,&c);
// printf("The avg is %f",avg(a,b,c));

// return 0;
// }
// float avg(int a, int b, int c){
//     float result;
//     result= (a+b+c)/3;
//     return result;
//  }



#include<stdio.h>
int temp(int a);

int main()
{
    int a;
    printf("Enter the temp:\n");
    scanf("%d", &a);
    printf("The Temperature in Fahrenheit is: %d Fahrenheit", temp(a));

return 0;
}
int temp(int a){
    int cel_to_fah;
    cel_to_fah=(a * 9/5)+32;
    return cel_to_fah;
}
