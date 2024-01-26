#include<stdio.h>

long toBin(int dno)
{
    long bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
}

            int main()
{
    long bno;
    int dno;
    printf("Input any decimal number : \n");  scanf("%d",&dno);
   
    bno = toBin(dno);
    printf("The Binary value is : %ld\n",bno);

    return 0;
}



#include<stdio.h>
int main()
{
int _2kl=25;
printf("%d",_2kl);
return 0;
}
