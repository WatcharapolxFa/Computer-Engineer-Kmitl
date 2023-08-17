#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf(" *** Checking for PRIME number. ***\nEnter a counting number : ");
    scanf("%d", &n);
    if (n >= 0){

        for (i = 2; i <= n / 2; ++i){
            if (n % i == 0){
                flag = 1;
                break;
            }
        }

        if (n == 1){
            printf("1 is NOT a prime number.");
        }
        else{
            if (flag == 0)
                printf("%d is a PRIME number.", n);
            else
                printf("%d is NOT a prime number.", n);
        }
    }
    else{
        printf("Only positive whole number : DO YOU GET IT? Ah....");
    }
    return 0;
}