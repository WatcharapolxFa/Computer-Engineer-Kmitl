#include <stdio.h>
int Primecheck(int x);

int main()
{
    int number1, number2, start , stop  , i ;
    printf("Enter number : ");
    scanf("%d %d", &number1 , &number2);
    if (number1 > number2)
    {
        start = number2;
        stop = number1;
    }
    else
    {
        start = number1;
        stop = number2;
    }
    printf("Prime number between %d and %d is : ", start , stop);
    for(i=start;i<=stop;i++)
    {
        if (Primecheck(i) == 1)
        {
            printf("%d ", i);
        }
    }
    
}

int Primecheck(int x)
{
    int i, check = 0;
    for (i = 0; i <= x; i++)
    {
        if (x % i == 0)
        {
            check++;
        }
    }
    if (check == 2)
    {
        return 1;
    }
    else
        return 0;
}