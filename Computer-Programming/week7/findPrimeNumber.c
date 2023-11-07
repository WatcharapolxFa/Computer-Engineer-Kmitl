#include <stdio.h>
int Primecheck(int x);

int main()
{
    int data;
    printf("Enter number : ");
    scanf("%d", &data);
    if (Primecheck(data) == 1)
    {
        printf("%d is prime number", data);
    }
    else
    {
        printf("%d is not prime number", data);
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