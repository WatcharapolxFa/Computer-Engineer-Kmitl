#include <stdio.h>

int main() {
    int num, rem, digits[10];
    printf(" *** Summation of each digit into one digit ***\nEnter a positive number : ");
    scanf("%d", &num);
    printf("%d", num);

    while (num >= 10) {
        int temp = num,count = 0,sum = 0;

        printf(" => ");

        while (temp > 0) {
            rem = temp % 10;
            sum += rem;
            digits[count] = rem;
            count++;
            temp /= 10;
        }

        for (int i = count - 1; i >= 0; i--)
        {
            printf("%d", digits[i]);
            if (i > 0)
                printf(" + ");
        }
        printf(" = %d", sum);
        num = sum;
    }
    return 0;
}