#include<stdio.h>
int main()
{
    float radius,pi,area;
    pi=22/7;
    printf("Enter radius : ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of circle = %f",area);
    return 0;
}