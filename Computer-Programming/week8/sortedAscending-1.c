#include<stdio.h>
int main(){
    int a[10],i,j,temp;
    printf(" *** Ascending sort ***\nEnter 10 whole numbers : ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }   
    }
    printf("Output : ");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}