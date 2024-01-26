#include<stdio.h>
int linearsearch(int arr[], int size,int element){
    for(int i =0;i<size;i++){
        if(arr[i]==element){
            return i;
    }
}
return -1;
}
int main()
{
int arr[]={2,5,1,6,5,88,1,4,2,55,21};
int size=sizeof(arr)/sizeof(int);
int element;
printf("Enter the number of the element you want to search\n");
scanf("%d", &element);
int searchindex=linearsearch(arr,size,element);
printf("The element %d was found at index %d\n",element,searchindex);
return 0;
}

