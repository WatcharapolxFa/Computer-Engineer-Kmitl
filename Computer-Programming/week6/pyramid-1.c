#include <stdio.h>
int main()
{
    int n;
    printf(" *** Show isosceles triangle ***\nEnter a counting number : ");
    scanf("%d", &n);
    if(n>2){
        printf("Output : \n");
        for (int i = 1; i <= n; i++){
            for (int j = n - i; j >= 1; j--)
                printf(" ");
            for (int k = 1; k <= 2 * i - 1; k++)
                printf("*");
        printf("\n");
        }
    }
    else
        printf(" --- Incorrect number. ---");
    
}