#include <stdio.h>

int findLargestNumber(int *arr, int size) {
    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    return largest;
}

int main() {
    int arr[] = { 12, 45, 67, 23, 56, 78, 90, 34, 87 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int largestNumber = findLargestNumber(arr, size);

    printf("The largest number in the array is: %d\n", largestNumber);

    return 0;
}
