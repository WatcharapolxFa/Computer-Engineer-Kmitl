#include <stdio.h>

int main()
{
    int ratings[5];
    printf("Enter 5 rating : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &ratings[i]);
    sort(ratings);
    printf("Sorted : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", ratings[i]);
}

void sort(int ratings[])
{
    int temp;
    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            if (ratings[i] > ratings[j])
            {
                temp = ratings[i];
                ratings[i] = ratings[j];
                ratings[j] = temp;
            }
}