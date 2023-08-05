#include <stdio.h>
int main(){
    printf(" *** Show a number in variety formats. ***\n");
    int num;
    printf("Enter a whole number : ");
    scanf("%d",&num);
    printf("You have input : %d\n",num);
    printf("You have input : %.2f\n",num*1.0);
    printf("Square : %d\n",num*num);
    printf("  %4d / 79 = %.4f\n",num,num/79.0);
    printf("  %4d / 29 = %.6f\n",num,num/29.0);
    printf("  %4d / 37 = %.9f",num,num/37.0);
    return 0;
}