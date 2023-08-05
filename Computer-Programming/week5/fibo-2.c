#include <stdio.h>

int main(){
    int a1, a2, n, i, a3;
    printf("******** Fibonacci series ********\n");
    printf("*  A(1) and A(2) are assigned.   *\n");
    printf("*     A(n) = A(n-1) + A(n-2)     *\n");
    printf("*--------------------------------*\n\n");
    printf("Enter A1 A2 n : ");
    scanf("%d %d %d", &a1, &a2, &n);
    printf("\n%d %d ", a1, a2);
    for(i=3; i<=n; i++){
        a3 = a1 + a2;
        printf("%d ", a3);
        a1 = a2;
        a2 = a3;
    }
    return 0;
}