#include <stdio.h>

int main()
{
    int Data, Sum = 0, NegOddCount = 0;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &Data);
        if (Data % 2 == 0)
        {
            Sum += Data;
        }

        if (Data % 2 == -1)
        {
            NegOddCount++;
        }
        else
        {
            NegOddCount = 0;
        }

    } while (NegOddCount < 3);
    printf("Sum of even number : %d\n", Sum);

    return 0;
}