#include <stdio.h>



void printPattern(int n) {

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("x");
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("x");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
