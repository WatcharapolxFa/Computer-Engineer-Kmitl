#include <stdio.h>
#include <stdbool.h>

bool has_T_A_in(char string[]);

int main()
{
    char name[20];
    printf("Enter your name : ");
    scanf("%s", &name);
    if (has_T_A_in(name))
        printf("Your are cute >///<");
    else
        printf("Not cute ._.");
}

bool has_T_A_in(char string[])
{
    /* CODE FUNCTION HERE */
    // if have T and A in name is cute
    bool has_T = false;
    bool has_A = false;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'T' || string[i] == 't')
            has_T = true;
        if (string[i] == 'A' || string[i] == 'a')
            has_A = true;
    }
    if (has_T && has_A)
        return true;
    else
        return false;
}

// โปรแกรมนี้ใช้ในการตรวจสอบว่าชื่อที่ผู้ใช้ป้อนมีตัวอักษร 'T' หรือ 't' และ 'A' หรือ 'a' อยู่ในชื่อหรือไม่ เพื่อบอกว่าผู้ใช้นั้นเป็นคนน่ารักหรือไม่ โดยมีขั้นตอนการทำงานดังนี้:

// โปรแกรมจะขอให้ผู้ใช้ป้อนชื่อโดยแสดงข้อความ "Enter your name : " และใช้ scanf เพื่อรับชื่อที่ผู้ใช้ป้อน โดยรับข้อมูลไม่เกิน 20 ตัวอักษร.

// โปรแกรมจะเรียกใช้ฟังก์ชัน has_T_A_in(name) เพื่อตรวจสอบว่าชื่อที่ผู้ใช้ป้อนมีตัวอักษร 'T' หรือ 't' และ 'A' หรือ 'a' หรือไม่ โดยส่งชื่อที่ผู้ใช้ป้อนเข้าไปในฟังก์ชัน.

// ในฟังก์ชัน has_T_A_in จะมีตัวแปร has_T และ has_A ที่ใช้แสดงว่าชื่อมีตัวอักษร 'T' หรือ 't' และ 'A' หรือ 'a' หรือไม่ โดยเริ่มต้นเรากำหนดให้ has_T และ has_A เป็น false.

// จากนั้นโปรแกรมจะทำการลูปผ่านทุกตัวอักษรในชื่อที่ผู้ใช้ป้อน โดยใช้ strlen เพื่อหาความยาวของชื่อ และใช้ลูป for ในการตรวจสอบทุกตัวอักษร ถ้าพบ 'T' หรือ 't' โปรแกรมจะกำหนด has_T เป็น true และถ้าพบ 'A' หรือ 'a' โปรแกรมจะกำหนด has_A เป็น true ด้วย.

// หลังจากที่ทำการตรวจสอบทุกตัวอักษรในชื่อเสร็จสิ้น โปรแกรมจะตรวจสอบค่าของ has_T และ has_A ถ้าทั้งคู่เป็น true แสดงว่าชื่อมีทั้ง 'T' (หรือ 't') และ 'A' (หรือ 'a') จึงจะคืนค่า true ออกมา แต่ถ้าไม่ใช่ทั้งคู่ โปรแกรมจะคืนค่า false ออกมา.

// โปรแกรมจะแสดงข้อความ "Your are cute >///<" ถ้าฟังก์ชัน has_T_A_in คืนค่า true และ "Not cute .-." ถ้าคืนค่า false.