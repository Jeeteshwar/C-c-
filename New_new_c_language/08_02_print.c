#include<stdio.h>
#include<string.h>
int main()
{
char str[]="Jeeteshwar";
char *ptr=str;

while(*ptr!='\0'){
    printf("%c", *ptr);
    ptr++;
}
return 0;
}