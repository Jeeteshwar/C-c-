#include <stdio.h>

void reverseString(char *str) {
    int length = 0;
    
    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }
    
    // Swap characters to reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
