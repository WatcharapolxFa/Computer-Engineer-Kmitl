#include <stdio.h>
int main(){
    int a, b, i, j, k, count[10] = {0};
    printf(" *** Digit counting ***\nEnter two counting numbers : ");
    scanf("%d %d", &a, &b);
    if(a < 0 || b < 0){
        printf("Invalid input !!!\n");
    }
    else{
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        for(i = a; i <= b; i++){
            j = i;
            while(j > 0){
                k = j % 10;
                count[k]++;
                j /= 10;
            }
        }
        for(i = 0; i < 10; i++){
            printf("%d --> %d\n", i, count[i]);
        }
    }
    return 0;
}