#include<stdio.h>
void printArray(int * A,int n){
    for(int i=0 ; i<n ; i++){
        printf("%4d",A[i]);
    }
    printf("\n");
}
int binarySearch(int *A,int size,int element){
    int low=0 , mid , high = size-1;
    while(low<=high){
        mid = (low + high) / 2;
        if(A[mid] == element){
            return mid;

        }
        else if(A[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;

}

void bubbleSort(int *A,int n){
    int temp;
    for(int i = 0 ; i < n - 1 ; i++ ){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if (A[j] > A[j + 1]){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[]={87,45,81,65,88,1,9,44,41,52,8,36,32,48,55};

    int size = sizeof ( arr ) / sizeof( int );

    printf("The array before sorting\n");

        printArray(arr,size);
        
            bubbleSort(arr, size);

    printf("The array after sorting\n");

        printArray(arr,size);
    

    int element;

        printf("Enter the element you want to search\n");

            scanf("%d",&element);

    int searchIndex = binarySearch ( arr , size , element);


        if (searchIndex == -1){
            printf("The element %d was not found!\n",element);

    }
        else{
            printf("The element %d was found at index %d\n",element,searchIndex);
    }
return 0;
}
