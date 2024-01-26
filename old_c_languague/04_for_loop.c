// #include<stdio.h>
// int main()
// {
// for (int a=0; a<10; a--){
//     printf("Enter the value of %d \n",a);
// };
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int n;
// printf("Enter the value of n\n");
// scanf("%d",&n);
// for(int i=n; i; i--){
//     printf("The value of %d\n",i);
// }
// return 0;
// }


   #include <stdio.h>
    int main()
    {
        short int i = 20;
        char c = 97;
        printf("%d, %d, %d\n", sizeof(i), sizeof(c), sizeof(c + i));
        return 0;
    }