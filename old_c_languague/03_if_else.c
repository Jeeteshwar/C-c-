// // #include<stdio.h>
// // int main ()
// // {
// //    int a,b;
// //    printf("Enter the number:\n");
// //    scanf("%d", &a);
// //    if(a>18){
// //      printf("%d can drive\n", a);
// //    }
// //    else{
// //        printf("%d cannot drive (minor) \n",a);
// //    }






// //    return 0;


// // }

// #include<stdio.h>
// int main (){
//     int age;
//     printf("Enter your age\n");
//     scanf("%d", &age);
//     if (age>=90){
//         printf("You are above 90, you cannot drive\n");
    
//     }
//     else{
//         printf("You can drive");

//     }

// return 0;

// }

#include<stdio.h>
int main (){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if (age>=90){
        printf("You cannot drive as you are above 90\n");

    }
    else{
        printf("You can drive\n");
        }

    // if (age<18){
    //     printf("You are minor, You cannot drive");

    // }

return 0;
}