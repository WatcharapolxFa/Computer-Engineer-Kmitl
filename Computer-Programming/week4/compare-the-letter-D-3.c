#include <stdio.h>

int main(){
    char input;
    printf("Enter Alphabet : ");
    scanf("%c",&input);
    if(input == 'D' || input == 'd'){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}