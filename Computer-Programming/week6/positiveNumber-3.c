#include <stdio.h>
int main()
{
    int num, count = 0;
    printf(" *** divisible number ***\nEnter a positive number : ");
    scanf("%d", &num);
    if (num == 0){
        printf("%d is OUT of range !!! ", num);
    }
    else{
        printf("Output ==> ");
        for (int i = 1; i <= num; i++){
            if (num % i == 0){
                printf("%d ", i);
                count++;
            }
        }
        printf("\nTotal ==> %d", count);
    }

    return 0;
}