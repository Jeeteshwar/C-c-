#include <stdio.h>

// function prototypes
void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", A[i]);
    }
    printf("\n");
}
void bubbleSort(int *A, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int *arr, int size, int element) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}


int main() {
    int A[] = {25, 65, 47, 14, 225, 36, 11, 47, 89};
    int n = sizeof(A) / sizeof(A[0]);

    printArray(A, n); // printing array before sorting

    bubbleSort(A, n);

    printArray(A, n); // printing array after sorting

    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    int searchIndex = binarySearch(A, n, element);

    if (searchIndex == -1) {
        printf("The element %d was not found in the array.\n", element);
    } else {
        printf("The element %d was found at index %d in the sorted array.\n", element, searchIndex);
    }

    return 0;
}
