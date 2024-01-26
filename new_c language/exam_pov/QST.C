// #include <stdio.h>

// // Function to calculate the factorial of a number
// int factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     // Calculate factorial of 12
//     int factorial_12 = factorial(12);

//     // Divide factorial_12 by 8
//     int result = factorial_12 / 8;

//     // Print the result
//     printf("(12!) / 8 = %d\n", result);

//     return 0;
// }




#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    int num = 12;
    int result = factorial(num);
    printf("The factorial of %d is: %d\n", num, result);

    printf("The factorial of %d is: %d and after dividing it with 8 we get %d", num   ,result, (result/8));

    return 0;
}