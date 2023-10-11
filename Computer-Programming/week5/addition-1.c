#include<stdio.h>

int main ()
{
    int i , final, sum =0 ;
    printf("Enter final number : ");
    scanf("%d",&final);
    while(i<=final){
        sum = sum+i ;
        i=i+1;
    }
    printf("Summation of 1 to %d is %d",final,sum);
    return 0 ; 
}