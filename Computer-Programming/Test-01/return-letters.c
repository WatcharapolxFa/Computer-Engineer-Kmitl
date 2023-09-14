#include<stdio.h>
// ให้เขียนโปรแกรมรับข้อความแล้วแสดงดังตัวอย่าง

// - บรรทัดที่ 3 แสดงคำตอบเพียง 12 ตัวแรกเท่านั้น

// - บรรทัดที่ 4 แสดงคำตอบกลับอักษร จากหลังไปหน้า

// - ห้ามใช้ #include <string.h> 

// - บรรทัดสุดท้ายมีคำสั่งการขึ้นบรรทัดใหม่ด้วย 
int main ()
{
    char str[100];
    printf("** Get input (string) from keyboard **\n");
    printf("   Input string : ");
    scanf("%[^\n]s",str);
    printf(" String : %.12s\n String : ",str);
    int i = 0,count=0;
    while(str[i] != '\0'){
        i++;
        count++;
    }
    for (int j = count-1; j >=0 ; j--)
    {
        printf("%c",str[j]);
    }
    printf("\n");
    return 0 ;
}