#include <stdio.h>

int main(){
    int size;
    printf("Enter size of rectangle : ");
    scanf("%d",&size);
    if(size <= 0){
        printf("This is impossiple!");
    }else{
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if(i == 0 || i == size-1){
                    printf("*");
                }else{
                    if(j == 0 || j == size-1){
                        printf("*");
                    }else{
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}