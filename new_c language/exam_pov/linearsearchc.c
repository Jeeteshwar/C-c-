#include<stdio.h>
int linearsearch(int arr[],int size, int element){
    for(int i =0;i<size;i++){
        if(arr[i]==0){
            return i;
        }
    }
    return -1;
}

int main()
{
int arr[]={54,65,98,14,25,3,5,8,81,};
int size=sizeof(arr)/sizeof(arr[0]);
int element;
printf("Enter the element you want to search\n");
scanf("%d",&element);

int searchindex=linearsearch(arr,size,element);

if(searchindex == -1){
    printf("The Element %d was not found in the array\n",element);

}
else{
    printf("The element %d was found  at index %d\n",element,searchindex);
}
return 0;
}