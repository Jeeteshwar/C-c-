#include<stdio.h>
int biarysearch(int *arr,int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){

    
    
    mid=(low+high)/2;
    
    if(arr[mid]==element){
        return mid;
    }
    
    else if(arr[mid]<element){
        return low = mid +1 ;
    }
    
    else{
        return high = mid -1;
        }
    }
    
    return -1;
}
    int main(){
    int arr[]={12,98,102,105,109,110,155};

    int size=sizeof(arr)/sizeof(arr[0]);
        int element;
            printf("Enter the element you want to search\n");
                scanf("%d",&element);
  int searchIndex=biarysearch(arr,size,element);
  if (searchIndex == -1) {
        printf("The element %d was not found in the array.\n", element);
    } else {
        printf("The element %d was found at index %d in the sorted array.\n", element, searchIndex);
    }
  return 0;
}