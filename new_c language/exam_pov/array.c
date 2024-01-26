#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Accessing elements of the array
    printf("Element at row 1, column 2: %d\n", matrix[0][1]);
    printf("Element at row 2, column 3: %d\n", matrix[1][2]);
    // ...
    
    return 0;
}
