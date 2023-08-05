#include <stdio.h>

int main(){
    int num;
    printf("Enter lottery number : ");
    scanf("%d",&num);
    printf("Jackpot : %d\n", num);
    printf("%-7s : %d\n", "+1", num+1);
    printf("%-7s : %d\n", "-1", num-1);
    printf("%-7s : %d\n", "First 3",num/1000);
    printf("%-7s : %d\n", "Last 3",num%1000);
    return 0;
}