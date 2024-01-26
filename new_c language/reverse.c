
#include<stdio.h>
int main()
{
int num,reverse=0;

        printf("Enter the integer you want to reverse\n");
            scanf("%d",&num);
    int input_num=num;

while(num>0){
        reverse = reverse * 10 + num % 10;
            num /= 10;

             }


printf("The Reverse number [BEFORE : %d] [AFTER : %d]",input_num,reverse);

return 0;
}