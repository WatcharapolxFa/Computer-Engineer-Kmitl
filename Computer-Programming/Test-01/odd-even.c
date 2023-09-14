#include"stdio.h"

int main ()
{

    int a,b,c,sum;
    printf("Enter 3 Number : ");
    scanf("%d %d %d",&a,&b,&c);
    sum = a+b+c ;
    printf("ANSWER = %d\n",sum);
    if((sum/100)%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0 ;
}