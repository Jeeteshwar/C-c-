// #include <stdio.h>

// int isPrime(int num) {
//  if (num<=1) {
//     return 0;
//  }

//     for(int i=2; i*i<=num ; i++){
//         if(num % i == 0){
//                 return 0;
//         }
//     }
 
    
//     return 1;
// }

// int main() {
//     int num;
//     printf("Enter the num");
//     scanf("%d",&num);
//     // printf("Prime number program 1 to nth term: ");

//     // for(int i=1;i<=num;i++){
//     //     if (isPrime(i)){
//     //     printf("%d ",i);
    
//     //     }
//     // }
//     int result=(isPrime(num));
//     if(result==1){
//         printf("Prime");
        
        
//     }
//     else{
//         printf("NOt prime tho");
//     }

//     printf("\n");
    
//     return 0;
// }
#include <stdio.h>

// int isPrime(int num) {
//  if (num<=1) {
//     return 0;
//  }

//     for(int i=2; i*i<=num ; i++){
//         if(num % i == 0){
//                 return 0;
//         }
//     }
 
    
//     return 1;
// }

// int main() {
//     int num;
//     printf("Enter the num");
//     scanf("%d",&num);
//     // printf("Prime number program 1 to nth term: ");

//     // for(int i=1;i<=num;i++){
//     //     if (isPrime(i)){
//     //     printf("%d ",i);
    
//     //     }
//     // }
//     int result=(isPrime(num));
//     if(result==1){
//         printf("Prime");
        
        
//     }
//     else{
//         printf("NOt prime tho");
//     }

//     printf("\n");
    
//     return 0;
// }


#include<stdio.h>
int main(){


int a =1;

while(a<=1){
if(a%2){
printf("%d",a++);
}
else{
printf("%d",++a);
printf("%d",a+10);
}
return 0;
}
}