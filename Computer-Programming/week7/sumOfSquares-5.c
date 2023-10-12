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

// โปรแกรมนี้ใช้ในการคำนวณผลรวมของตารางเลขยกกำลังสองของเลขที่ผู้ใช้ป้อนเข้ามา โดยมีขั้นตอนการทำงานดังนี้:

// โปรแกรมจะแสดงข้อความ "Enter 2 integers : " เพื่อขอให้ผู้ใช้ป้อน 2 จำนวนเต็ม (num1 และ num2) โดยใช้ scanf เพื่อรับข้อมูลที่ผู้ใช้ป้อน.

// โปรแกรมจะทำการเปรียบเทียบค่า num1 และ num2 เพื่อหาค่าที่มากที่สุด (max) และค่าที่น้อยที่สุด (min) โดยใช้เงื่อนไข if-else. ค่า max จะเก็บค่าที่มากที่สุดระหว่าง num1 และ num2 และค่า min จะเก็บค่าที่น้อยที่สุด.

// โปรแกรมจะเรียกใช้ฟังก์ชัน sum_of_square(min, max) เพื่อคำนวณผลรวมของตารางเลขยกกำลังสองของเลขที่อยู่ระหว่าง min และ max โดยใช้ลูป for เพื่อหาค่าแต่ละตัวในช่วงนี้และนำมาบวกเข้ากับ sum.

// โปรแกรมจะแสดงผลลัพธ์ของผลรวมของตารางเลขยกกำลังสองของเลขที่อยู่ระหว่าง min และ max ด้วยข้อความ "Sum of square from {min} to {max} = {ผลรวมของตารางเลขยกกำลังสอง}".