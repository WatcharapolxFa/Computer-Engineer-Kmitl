#include <stdio.h>

int main() {
    char *x[] = {"Dog", "Cat", "Bird", "Ant", "Zebra"};
    int length = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < length; i++) {
        printf("%s\n", x[i]);
        for (int j = 0; j <= i; j += 2) {
            printf("x\n");
            if (i == j) {
                printf("-\n");
            }
        }
    }

    return 0;
}
