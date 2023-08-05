#include <stdio.h>
int main(){
    int x,y,sum;
    printf(" *** Power ***\n");
    printf("Enter 2 Positive Integers: ");
    scanf("%d %d",&x,&y);
    printf("%d",x);
    sum = x;
    for(int i=1;i<y;i++){
        printf(" x %d",x);
        sum *= x;
    }
    printf(" = %d",sum);
    return 0;
}