#include <stdio.h>

int main() {
    int i = 1, j = 1, k = 1, l = 1;
    
    printf("Original i = %d\n", i);
    printf("++i: %d\n", ++i); // Pre-increment: i is now 2, prints 2
    i = 1; // Reset i for the next example
    printf("i++: %d\n", i++); // Post-increment: prints 1, then i becomes 2
    
    printf("\nOriginal j = %d\n", j);
    printf("--j: %d\n", --j); // Pre-decrement: j is now 0, prints 0
    j = 1; // Reset j for the next example
    printf("j--: %d\n", j--); // Post-decrement: prints 1, then j becomes 0
    
    printf("\nOriginal k = %d\n", k);
    printf("1++: Error\n"); // This is not a valid syntax
    
    printf("\nOriginal l = %d\n", l);
    printf("1--: Error\n"); // This is not a valid syntax

    return 0;
}
