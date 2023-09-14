#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลขจำนวนเต็มระหว่าง 2-12 แล้วแสดงสูตรคูณ
int main ()
{

    int num1;
    printf("Enter number 2-48 : ");
    scanf("%d" ,&num1);
    for (int i = 1; i < 13; i++)
    {
        printf("%2d x %2d = %3d\n",num1,i,num1*i);
    }
    return 0 ;
}