#include <stdio.h>

int main(){
    int num;
    printf(" *** prime number (1-20) ***\n");
    printf("Enter number : ");
    scanf("%d",&num);


    if(num==2||num==3||num==5||num==7||num==11||num==13||num==17||num==19){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}