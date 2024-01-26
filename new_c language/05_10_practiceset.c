// #include <stdio.h>
// int fibo(int);
 
// int main()
// {
//     int num;
//     int result;
 
//     printf("Enter the nth number in fibonacci series: ");
//     scanf("%d", &num);
//     if (num < 0)
//     {
//         printf("Fibonacci of negative number is not possible.\n");
//     }
//     else
//     {
//         result = fibo(num);
//         printf("The %d number in fibonacci series is %d\n", num, result);
//     }
//     return 0;
// }
// int fibo(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else if (num == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return(fibo(num - 1) + fibo(num - 2));
//     }
// }

#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n){
    if (n !=0)
        return n + addNumbers(n-1);
    else
        return n;
}

