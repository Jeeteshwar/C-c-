#include<stdio.h>
int findsum(int n){
    if(n==0){
        return 0;
    }
    else {
        return n + findsum(n-1);

    }
}
int main()
{
    int n;
        printf("Enter the value of n : ");
        scanf("%d",&n);

    int sum=findsum(n);

    printf("\nThe series is 1+2+3...%d = %d",n,sum);

return 0;
}