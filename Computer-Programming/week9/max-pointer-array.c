#include<stdio.h>
int main (){
    int N[5], i , max ;
    int *p ;
    p=N ;
    for(i = 0 ; i <5 ; i++){
        printf("Input number [%d] ",i+1);
        scanf("%d",p);
        p++;
    }

    p = N ;
    max = *p ; 
    for(i=0 ; i<5 ; i++){
        if(*p > max){
            max = *p ;
        }
        p++;
    }
    printf("max = %d\n",max);
}