#include <stdio.h>

int main(){
    int a, b;
    printf(" *** Arithmetic Sequence ***\n");
    printf("Enter 2 Positive Integers: ");
    scanf("%d %d", &a, &b);
    for(int i = 9; i >= 0; i--){
        printf("%d ", a + (b * i));
    }

    return 0;
}