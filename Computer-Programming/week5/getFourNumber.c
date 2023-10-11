#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, max , secondMax;
    printf("Enter four number : ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        max = num1;
        if (num2 > num3 && num2 > num4)
        {
            secondMax = num2;   
        }
        else if (num3 > num2 && num3 > num4)
        {
            secondMax = num3;
        }
        else
        {
            secondMax = num4;
        }
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4){
        max = num2;
        if(num3 > num4){
            secondMax = num3;
        }
        else{
            secondMax = num4;
        }   
    }
    else if (num3 > num1 && num3 > num2 && num3 > num4){
        max = num3;
        if(num1 > num2 && num1 > num4){
            secondMax = num1;
        }
        else{
            secondMax = num4;
        }   
    }
    else{
        max = num4;
        if(num1 > num2 && num1 > num3){
            secondMax = num1;
        }
        else{
            secondMax = num3;
        }   
    }
    printf("Max : %d\n", max);
    printf("Second Max : %d\n", secondMax);

    return 0;
}