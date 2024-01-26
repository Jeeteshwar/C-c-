#include<stdio.h>
void reverse(int *arr, int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-1-i]=temp;
    }
}
int main()
{
int arr[]={11,12,13,14,15,16,17};
int size= sizeof(arr)/sizeof(int);
reverse(arr,size);
for(int i =0;i<7;i++){
    printf("The value of %d element is %d\n",i,arr[i]);
}
return 0;
}