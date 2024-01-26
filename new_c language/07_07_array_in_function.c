#include<stdio.h>
void printarray(int arr[], int n){
    for(int i =0; i<7; i++){
        printf("The data of the element %d is %d\n", i+1,arr[i]);
    }
    arr[2]=525;
}
int main()
{
int arr[]={54,21,45,87,96,201,222};
printarray(arr,7);
printf("The new value is %d",arr[2]);
return 0;
}