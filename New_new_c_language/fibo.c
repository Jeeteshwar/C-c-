#include <stdio.h>
#include <stdlib.h>
void reverse(int *arr, int n){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    
int arr[] = {16, 13, 7, 2, 1,12};
    int size= sizeof(arr)/sizeof(int);

   printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    reverse(arr,size);
    
    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
