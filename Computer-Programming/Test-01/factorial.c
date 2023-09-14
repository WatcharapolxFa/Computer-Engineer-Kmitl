#include<stdio.h>

int main ()
{

    int num1,sum=1;
    printf("input : ");
    scanf("%d" ,&num1);
    for (int i = 1; i<=num1; i++)
    {
        sum*=i;
    }
    
    if(num1<0){
        printf("Input is not allowed!");
    }
    else{
        printf("%d! = %d",num1,sum);
    }
    
    return 0 ;
}