#include<stdio.h>

void printArray(int *A,int n){
    for(int i = 0; i < n; i++){
        printf("%4d", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n){
    int temp;
    for(int i = 0; i < n - 1; i++){ // for number of passes
        for (int j = 0; j < n - i - 1; j++){  // for number of Comparisons
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int binarySearch(int *arr, int size,int element){
    int low=0,high=size-1;
    int mid;
       
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == element){
            return mid;
        } else if (arr[mid] < element){
            low = mid + 1;
        } else {
            high = mid - 1;
        }   
    }
    return -1;
}

int main(){
    int A[] = {25, 65, 8, 14, 225, 36, 11, 47, 89};
    int size = sizeof(A) / sizeof(int);

    printf("Array before sorting: ");
    printArray(A, size);

    bubbleSort(A, size);

    printf("Array after sorting: ");
    printArray(A, size);

    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    int searchIndex = binarySearch(A, size , element);

    if (searchIndex == -1){
        printf("The element %d was not found in the array.\n", element);
    } else {
        printf("The element %d was found at index %d in the sorted array.\n", element, searchIndex);
    }

    return 0;
}
