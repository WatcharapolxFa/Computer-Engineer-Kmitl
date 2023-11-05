#include<stdio.h>
int main ()
{
    int a = 50 , b = 90 ;
    int *p ;
    printf("a = %d , b = %d\n",a,b);
    p = &a ;
    printf("address of a = %u\n",&a);
    printf("address of a = %u\n",p);
    printf("value of a = %d\n",*p);
    *p = 100 ;
    printf("value of a = %d\n",a);
}