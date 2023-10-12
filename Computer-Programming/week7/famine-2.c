#include <stdio.h>

float calculate(int prize, float tax);

int main()
{
    /* CODE INPUT HERE */
    int prize1, prize2;
    float tax1, tax2;
    printf("Enter 2 prizes and 2 coupons : ");
    scanf("%d %d %f %f", &prize1, &prize2, &tax1, &tax2);
    float taxed1 = calculate(prize1, tax1);
    float taxed2 = calculate(prize2, tax2);

    /* CODE OUTPUT HERE */    
    printf("Item1 %d -> %.2f\n", prize1, taxed1);
    printf("Item2 %d -> %.2f\n", prize2, taxed2);

    if (taxed1 < taxed2)
        printf("* Item1 is cheaper");
    else if (taxed1 == taxed2)
        printf("* Item1 is equal to Item2");
    else
        printf("* Item2 is cheaper");
}

float calculate(int prize, float tax)
{
    /* CODE FUNCTION HERE */
    return prize + (prize * tax / 100);
}


// โปรแกรมนี้ใช้ในการคำนวณราคาสินค้าหลังจากหักภาษี และเปรียบเทียบราคาระหว่างสินค้า 2 รายการ โดยมีขั้นตอนการทำงานดังนี้:

// โปรแกรมจะขอให้ผู้ใช้ป้อนข้อมูลโดยแสดงข้อความ "Enter 2 prizes and 2 coupons : " และใช้ scanf เพื่อรับข้อมูล 2 ราคาสินค้า (prize1 และ prize2) และ 2 ค่าภาษี (tax1 และ tax2) ที่ผู้ใช้ป้อน.

// โปรแกรมจะเรียกใช้ฟังก์ชัน calculate(prize, tax) เพื่อคำนวณราคาสินค้าหลังหักภาษีสำหรับทั้ง 2 รายการ (taxed1 และ taxed2) โดยส่ง prize1 และ tax1 ไปในฟังก์ชันเพื่อคำนวณ taxed1 และ prize2 และ tax2 ไปในฟังก์ชันเพื่อคำนวณ taxed2.

// โปรแกรมจะแสดงผลลัพธ์ของราคาสินค้าหลังหักภาษีของทั้ง 2 รายการ ด้วยข้อความ "Item1 {prize1} -> {taxed1}" และ "Item2 {prize2} -> {taxed2}" โดยแสดงผลลัพธ์ราคาของทั้ง 2 รายการที่คำนวณได้.

// โปรแกรมจะทำการเปรียบเทียบราคาระหว่างรายการ 2 รายการ โดยใช้เงื่อนไข if-else. ถ้า taxed1 น้อยกว่า taxed2 โปรแกรมจะแสดงข้อความ "* Item1 is cheaper" ถ้า taxed1 เท่ากับ taxed2 โปรแกรมจะแสดงข้อความ "* Item1 is equal to Item2" และถ้า taxed1 มากกว่า taxed2 โปรแกรมจะแสดงข้อความ "* Item2 is cheaper".