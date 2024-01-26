#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
            if(a>b&&a>c&&a>d&&a>e){
                printf("A is gretest among all\n");
            }
            else if (b<a&& b>c&&b>d&&b>e){
            printf("B is gretest among all\n");

}
else if(c>a&&c>b&&c>d&&c>e){
    printf("C is gretest among all\n");
}
else if(d>a&&d>b&&d>c&&d>e){
    printf("D is gretest among all\n");
}
else{
    printf("D is gretest among all\n");
}
return 0;
}