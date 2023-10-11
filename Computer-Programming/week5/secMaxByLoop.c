#include<stdio.h>
int main (){
    int count = 0 , max , secondMax , data;
    do {

        printf("Pleses enter a number : ");
        scanf("%d", &data);
        count = count+1 ;
        if(count == 1 ){
            max = data ;
            secondMax = data ;
        }
        else if (data < secondMax && max == secondMax)
        {
            secondMax = data ;
        }
        else if (data > max)
        {
            secondMax = max ;
            max = data ;
        }
        else if (data < max && data > secondMax)
        {
            secondMax = data ;
        }
    }while (count < 4 );
    printf("%15s%10d\n%15s%10d\n", "Max : ", max, "Second Max : ", secondMax);
    
    return 0;
}