#include<stdio.h>

void Swap(int *a , int *b){
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}

int main ()
{
    int i , j ;
    int Number[5] = { 50 , 14 , -30 , 240 , 50 } ;
    for ( i = 0; i < 4; i++)
    {
       for(j = i+1 ; j < 5 ;j++)
       {
        if (Number[i]>Number[j])
        
        {
            Swap(&Number[i],&Number[j]);
        }
        
       }
    }
    for(int y = 0 ; y < 5 ; y++)
    {
        printf("%d \n",Number[y]);
    }
    
    
    return 0 ; 
}