#include<stdio.h>
int main ()
{
   int n[5] = { 10 , 20 , 30 , 40 , 50 } ;
   int *p ; 
   p = &n[2];
   printf("value of n[2] = %d\n",*p);
   printf("- บวกค่าเข้าไปสองค่าจากค่าที่ p ชี้อยู่แต่ไม่ได้แก้ไขค่าข้อมูลต้นฉบับ \n");
   printf("value of n[2] = %d\n",*p+2);
   printf("value of n[2] = %d\n",*p);
   printf("- การขยับไปทางขวาสองห้อง \n");
   printf("value of n[2] = %d\n",*(p+2));
   printf("value of n[2] = %d\n",p[2]);

    p=p+1 ; // == p++ หรือ p= n เลยคือชี้ห้อง 0 
    printf("- เอาไว้ขยับ pointter ไปเลย \n");
    printf("value of n[3] = %d\n",*p);

   


}