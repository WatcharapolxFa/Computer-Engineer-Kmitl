#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
    printf("Capital : %s\n", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("Small : %s\n", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }
    printf("Title : %s\n", str);

    return 0;
}

// โปรแกรมนี้ทำหน้าที่แปลงข้อความในสตริงที่ผู้ใช้ป้อนให้อยู่ในรูปแบบต่าง ๆ รวมถึงการแปลงเป็นตัวพิมพ์ใหญ่ (Capital), ตัวพิมพ์เล็ก (Small), และรูปแบบ Title โดยมีขั้นตอนการทำงานดังนี้:

// โปรแกรมจะขอให้ผู้ใช้ป้อนข้อความโดยแสดงข้อความ "Enter a string : " และใช้ fgets เพื่อรับข้อความที่ผู้ใช้ป้อน โดยรับข้อมูลไม่เกิน 100 ตัวอักษร (รวมเว้นช่องว่างและตัวขึ้นบรรทัดใหม่) และเก็บข้อความนี้ในอาร์เรย์ str.

// โปรแกรมจะกำจัดตัวขึ้นบรรทัดใหม่ (\n) ที่อาจจะปรากฏในสตริงที่รับมาด้วย strcspn โดยการกำหนด \0 แทนที่ตัวขึ้นบรรทัดใหม่นี้ เพื่อให้สตริงเป็นสตริงปกติที่สามารถประมวลผลต่อได้.

// โปรแกรมจะใช้ลูป for และฟังก์ชัน toupper เพื่อแปลงทุกตัวอักษรในสตริง str เป็นตัวพิมพ์ใหญ่ โดยเริ่มจาก str[0] และทำการแปลงทีละตัวไปจนถึงสิ้นสุดของสตริง (str[i] != '\0') และเก็บผลลัพธ์กลับไปในตัวแปร str.

// หลังจากการแปลงเป็นตัวพิมพ์ใหญ่เสร็จสิ้น โปรแกรมจะแสดงสตริงที่แปลงแล้วด้วยข้อความ "Capital : " พร้อมกับสตริงที่แปลงเป็นตัวพิมพ์ใหญ่.

// โปรแกรมจะใช้ลูป for และฟังก์ชัน tolower เพื่อแปลงทุกตัวอักษรในสตริง str เป็นตัวพิมพ์เล็กอย่างเดียว.

// หลังจากการแปลงเป็นตัวพิมพ์เล็กเสร็จสิ้น โปรแกรมจะใช้ลูป for เพื่อตรวจสอบทุกตัวอักษรในสตริง str และถ้าตัวอักษรนั้นเป็นตัวแรกของคำ (ถ้าตัวอักษรก่อนหน้าหรือที่ตำแหน่ง i-1 เป็นช่องว่างหรือสัญลักษณ์เริ่มคำ) โปรแกรมจะแปลงตัวนั้นเป็นตัวพิมพ์ใหญ่ ดังนั้นสตริงจะอยู่ในรูปแบบ Title Case โดยที่คำแรกของแต่ละคำเป็นตัวพิมพ์ใหญ่.

// โปรแกรมจะแสดงผลลัพธ์ในรูปแบบตัวพิมพ์ใหญ่ (Capital) และตัวพิมพ์เล็ก (Small) และ Title Case ตามลำดับ.






