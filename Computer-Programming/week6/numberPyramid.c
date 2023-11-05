#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter a positive number (1-15): ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("%d is too low ");
        return 0;
    }
    else if (n > 15)
    {
        printf("%d is too high ");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%x", i);
        }
        printf("\n");
    }
}