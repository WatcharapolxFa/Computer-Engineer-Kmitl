#include <stdio.h>
int main()
{
    int n, i, flag = 0;
    printf(" *** Checking for PRIME number. ***\nEnter a counting number : ");
    scanf("%d", &n);
    if (n >= 0){

        for (i = 2; i <= n / 2; ++i){
            if (n % i == 0){
                flag = 1;
                break;
            }
        }

        if (n == 1){
            printf("1 is NOT a prime number.");
        }
        else{
            if (flag == 0)
                printf("%d is a PRIME number.", n);
            else
                printf("%d is NOT a prime number.", n);
        }
    }
    else{
        printf("Only positive whole number : DO YOU GET IT? Ah....");
    }
    return 0;
}


// โปรแกรมนี้ทำหน้าที่ตรวจสอบว่าจำนวนที่ผู้ใช้ป้อนเป็นจำนวนเฉพาะ (Prime number) หรือไม่ ดังนี้:

// โปรแกรมจะแสดงข้อความ " *** Checking for PRIME number. ***\nEnter a counting number : " เพื่อขอให้ผู้ใช้ป้อนจำนวนเต็ม (n) โดยใช้ scanf เพื่อรับข้อมูลที่ผู้ใช้ป้อน.

// โปรแกรมจะตรวจสอบว่า n เป็นจำนวนเต็มไม่ติดลบหรือไม่ (n >= 0) ถ้าเป็นจริงจะดำเนินการตรวจสอบว่า n เป็นจำนวนเฉพาะหรือไม่ ถ้า n เป็นจำนวนเฉพาะ โปรแกรมจะแสดง "n is a PRIME number." ถ้า n ไม่เป็นจำนวนเฉพาะ โปรแกรมจะแสดง "n is NOT a prime number."

// ในกรณีที่ n เป็น 1, โปรแกรมจะแสดง "1 is NOT a prime number." เนื่องจาก 1 ไม่ถือว่าเป็นจำนวนเฉพาะ.

// ถ้า n มีค่าน้อยกว่า 0 (n < 0) โปรแกรมจะแสดง "Only positive whole number : DO YOU GET IT? Ah...." เพื่อแจ้งให้ผู้ใช้ป้อนจำนวนเต็มบวกเท่านั้น.

// โปรแกรมจะสิ้นสุดการทำงานหลังจากแสดงผลลัพธ์.

// การตรวจสอบว่าจำนวนเป็นจำนวนเฉพาะหรือไม่ทำโดยใช้ลูป for เพื่อทดสอบว่า n หารด้วยตัวเลขตั้งแต่ 2 ถึง n/2 หากพบว่ามีตัวเลขใดที่ทำให้ n หารลงตัว โปรแกรมจะตั้งค่า flag เป็น 1 และหยุดการทำงานของลูป for ด้วยคำสั่ง break โดยนั่นแสดงว่า n ไม่เป็นจำนวนเฉพาะ แต่ถ้าลูป for ทำงานจนจบแล้ว flag ยังคงเป็น 0 โปรแกรมจะตรวจสอบค่า n ว่าเป็น 1 หรือไม่ ถ้าเป็น 1 จะแสดง "1 is NOT a prime number." ถ้า n ไม่เป็น 1 และ flag เป็น 0 จะแสดง "n is a PRIME number." แสดงว่า n เป็นจำนวนเฉพาะ.