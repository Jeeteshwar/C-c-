
#include<stdio.h>
int main()
{
int table[10];
int num;
printf("Enter the number whose table you want\n");
scanf("%d", &num);
for(int i =0; i<10; i++){
    table[i]=num*(i+1);

}
printf("The table we are printing is %d\n", num);
for(int i =0; i<10;i++){
    printf("%d x %d = %d\n", num,i+1,table[i]);
}
return 0;
}