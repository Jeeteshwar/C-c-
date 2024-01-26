// #include<stdio.h>
// int main()
// {
//     {
//  auto int i=1;
// {
// auto int i = 2;
// {
// auto int i =3;
// printf("%d",i);
// }
// printf("%d",i);
// }
// printf("%d",i);
// }

// return 0;
// }


// #include<stdio.h>
// int main()
// {
// extern int i;
// i=20;
// printf("%d\n",i);

// return 0;
// }

// #include<stdio.h>
// int main()
// {


//     int y = 200;
//     const int x = y;
//     x=10;
//     printf("%d\n",x);

// return 0;
// }



#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
