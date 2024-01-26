#include<stdio.h>
int main()
{
char gender;
printf("Enter your gender\n");
scanf("%c", gender);
switch (gender)
{
case 'M':
case 'm':
printf("The gender is male");
break;
default:
    printf("UNSPECEFIEC GENDER");
    break;

}
return 0;
}