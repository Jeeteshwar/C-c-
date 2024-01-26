#include <stdio.h>

int binarySearch(int arr[], int size, int element) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 8, 9, 12, 13, 15, 25, 36, 95, 105, 111, 120 };
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("Enter the number you want to search: ");
    scanf("%d", &element);
    int searchIndex = binarySearch(arr, size, element);
    if (searchIndex == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", searchIndex);
    }
    return 0;
}