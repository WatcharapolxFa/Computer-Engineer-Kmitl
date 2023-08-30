#include<stdio.h>
int main()
{
    printf("123456789012345678901234567890\n");
    printf("\n%20d***",46);
    printf("\n%-20d***",46);
    printf("\n%3d***",46);
    printf("\n%3d***",2550);

    printf("123456789012345678901234567890\n");
    printf("\n%20f***",1234.56789);
    printf("\n%-20f***",1234.56789);
    printf("\n%.3f***",1234.56789);
    printf("\n%20.3f***",1234.56789);
    printf("\n%-20.3f***",1234.56789);

    printf("123456789012345678901234567890\n");
    printf("\n%20s***","programming");
    printf("\n%-20s***","programming");
    return 0;
}