#include<stdio.h>
int main()
{
int arr[10];
int *ptr=arr;
ptr=ptr+2;
if(ptr==&arr[2]){
    printf("These pointers shares the same location in memory\n");
}
else{
    printf("These pointers do not share the same pointers in the memory\n");

}

return 0;
}