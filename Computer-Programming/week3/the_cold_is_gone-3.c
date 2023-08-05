#include <stdio.h>

int main(){
    float f,c;
    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("Temparature in degree Celsius : %.2f",c);
    return 0;
}