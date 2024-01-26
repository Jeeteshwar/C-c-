// #include<stdio.h>
// int odd(int a){
//     if(a%2==0){
//         printf("The number is even\n");
//     }
//     else{
//         printf("THe number is odd\n");
//     }
    
// }
// int main(){
//     int result;
//     result=odd(25);
// }


#include <stdio.h>

int factorial(int n) {
    if (n == 0){

     return 1;
        }
    else{
        return n * factorial(n-1);
        }
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("The factorial of %d is: %d", num, result);
    return 0;
}