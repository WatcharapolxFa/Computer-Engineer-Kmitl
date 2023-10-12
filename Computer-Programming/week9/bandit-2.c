#include <stdio.h>
void swap_wallet(int *my_wallet, int *other_wallet)
{
    int temp = *my_wallet;
    *my_wallet = *other_wallet;
    *other_wallet = temp;
}

int main()
{
    int my_wallet, other_wallet;
    printf("Enter my money, other money : ");
    scanf("%d %d", &my_wallet, &other_wallet);
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
    swap_wallet(&my_wallet, &other_wallet);
    printf("\n\n====== Whooop! ======\n\n");
    printf("Me : %4d | Other : %4d", my_wallet, other_wallet);
}

// โปรแกรมนี้มีวัตถุประสงค์ในการแสดงการทำงานของฟังก์ชัน swap_wallet ที่ใช้สลับค่าในตัวแปร my_wallet และ other_wallet ที่ถูกป้อนเข้ามาใหม่โดยผู้ใช้. ขั้นตอนการทำงานของโปรแกรมมีดังนี้:

// โปรแกรมจะแสดงข้อความ "Enter my money, other money : " เพื่อขอให้ผู้ใช้ป้อนจำนวนเงินสองค่า โดยจะรับค่าจำนวนเงินทั้งสองค่าผ่านฟังก์ชัน scanf.

// หลังจากนั้น โปรแกรมจะแสดงค่าที่ผู้ใช้ป้อนเข้ามาในรูปแบบตาราง โดยใช้คำสั่ง printf. รูปแบบของข้อความที่แสดงจะมีรูปแบบ "%4d" ซึ่งจะแสดงตัวเลขเต็มในรูปแบบที่มีทั้งหมด 4 ตำแหน่ง (ถ้าตัวเลขน้อยกว่า 4 ตำแหน่ง จะเติมเว้นวรรคข้างหน้าเพื่อให้ค่าสามารถจัดจำแหน่งได้อย่างถูกต้อง).

// หลังจากนั้น โปรแกรมจะเรียกใช้ฟังก์ชัน swap_wallet โดยส่งตำแหน่งของตัวแปร my_wallet และ other_wallet เข้าไป.

// ในฟังก์ชัน swap_wallet, ค่าในตัวแปร my_wallet จะถูกเก็บไว้ในตัวแปร temp และจากนั้นค่าในตัวแปร my_wallet จะถูกกำหนดให้เท่ากับค่าในตัวแปร other_wallet และค่าในตัวแปร other_wallet จะถูกกำหนดให้เท่ากับค่าในตัวแปร temp ซึ่งทำให้ค่าของ my_wallet และ other_wallet ถูกสลับกัน.

// หลังจากการเรียกใช้ฟังก์ชัน swap_wallet โปรแกรมจะแสดงข้อความ "====== Whooop! ======" เพื่อแสดงการเกิดการสลับค่า.

// สุดท้าย โปรแกรมจะแสดงค่าของ my_wallet และ other_wallet อีกครั้งหลังจากการสลับค่า ซึ่งจะแสดงถึงการเปลี่ยนแปลงในค่าที่เกิดขึ้นหลังจากการสลับในฟังก์ชัน swap_wallet.