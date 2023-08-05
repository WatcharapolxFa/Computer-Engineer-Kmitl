#include <stdio.h>
int main(){
    int a, b, min, max, sum=0;
    printf(" *** Display Summation ***\n");
    printf("Enter 2 whole numbers : ");
    scanf("%d %d", &a, &b);
    if(a<b){
        min=a;
        max=b;
    }
    else{
        min=b;
        max=a;
    }

    printf("Summation = ");
    for(int i=min;i<=max;i++){
        sum+=i;
        if(i==max){
            printf("%d = %d",i,sum);
        }else{
            printf("%d + ",i);
        }
    }
    return 0;
}