#include <stdio.h>

int main()
{
    int my_wallet, other_wallet;
    printf("Enter my money, other money : ");
    scanf("%d %d", &my_wallet, &other_wallet);
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
    swap_wallet(&my_wallet, &other_wallet);
    printf("\n\n====== Whooop! ======\n\n");
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}

void swap_wallet(int *my_wallet, int *other_wallet)
{
    int temp = *my_wallet;
    *my_wallet = *other_wallet;
    *other_wallet = temp;
}