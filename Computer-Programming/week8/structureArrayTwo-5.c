#include<stdio.h>

#define SIZE 10



int main() {

    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[10];
    int i,i_max,i_min;
    float average=0,sum=0;

    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }

    //make sure whether data is as expected.
    /*
    printf("\nOutput : \n");
    for(i=0;i<SIZE;i++) {
        printf("%s %s %d\n",st[i].id,st[i].name,st[i].marking);
    }
    */

    // find max marking
    i_max=0;
    for(i=1;i<SIZE;i++) {
        if(st[i].marking > st[i_max].marking) {
            i_max = i;
        }
    }
    //find number of students who get max marking
    int count=0;
    for(i=0;i<SIZE;i++) {
        if(st[i].marking == st[i_max].marking) {
            count++;
        }
    }

    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n",st[i_max].marking,count);
    int j = 0;
    for(i=0;i<SIZE;i++) {
        
        if(st[i].marking == st[i_max].marking) {
            printf("%d. %s %s %d\n",j+1,st[i].id,st[i].name,st[i].marking);
            j++;
        }
    }
    return 0;

}