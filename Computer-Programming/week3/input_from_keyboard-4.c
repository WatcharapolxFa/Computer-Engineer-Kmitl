#include <stdio.h>

int main(){
    char str[100];
    printf(" *** Get input from keyboard as string ***\nPlease input a string : ");
    gets(str);
    printf("string : %s\n", str);
    printf("string : %.7s\n", str);
    printf("string : %.15s\n", str);
    return 0;
}