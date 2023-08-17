#include<stdio.h>
int sum_of_square(min,max) {
    int sum=0;
    for(int i=min;i<=max;i++) {
        sum+=i*i;
    }
    return sum;
}

int main() {
    int num1,num2,min,max;
    printf(" *** Find sum of square ***\n");
    printf("Enter 2 integers : ");
    scanf("%d %d",&num1,&num2);
    if(num1>=num2) {
        max=num1;
        min=num2;
    } else {
        max=num2;
        min=num1;
    }
    printf("Sum of square from %d to %d = %d\n",min,max,sum_of_square(min,max));
      
	return 0;
}