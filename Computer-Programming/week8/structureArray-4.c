#include<stdio.h>

#define SIZE 10



int main() {

    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i,i_max,i_min;
    float average=0,sum=0;

    printf(" *** Structure Array ***\n");
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

    // find min marking
    i_min=0;
    for(i=1;i<SIZE;i++) {
        if(st[i].marking < st[i_min].marking) {
            i_min = i;
        }
    }

    //calculate average
    for(i=0;i<SIZE;i++) {
        sum += st[i].marking;
    }

    average = sum/SIZE;

    printf("\n\n *** Analyzing Data ***\n");
    printf("Average marking = %.3f\n",average);
    printf("Min -- Max      = %d --> %d\n",st[i_min].marking,st[i_max].marking);
    return 0;

}

//โปรแกรมนี้มีวัตถุประสงค์ในการจัดการข้อมูลของนักเรียน (student) โดยใช้โครงสร้าง (structure) และทำการคำนวณค่าเฉลี่ยของคะแนนการบันทึกของนักเรียน, ค้นหาคะแนนที่สูงสุดและต่ำสุด, และแสดงผลลัพธ์ที่ได้ดังนี้:

// โปรแกรมจะประกาศโครงสร้าง student ซึ่งประกอบด้วย 3 สมาชิก: id (รหัสนักเรียน), name (ชื่อนักเรียน), และ marking (คะแนนการบันทึก).

// โปรแกรมจะประกาศตัวแปร st เป็นอาร์เรย์ของโครงสร้าง student ที่มีขนาด 10 เป็นตัวแปรที่ใช้เก็บข้อมูลของนักเรียน และตัวแปร i, i_max, i_min, average, sum สำหรับการทำงานต่างๆ.

// โปรแกรมจะแสดงข้อความ " *** Structure Array ***\nEnter data : " เพื่อขอให้ผู้ใช้ป้อนข้อมูลของนักเรียน โดยใช้ลูป for เพื่อรับข้อมูลรหัสนักเรียน (id), ชื่อนักเรียน (name), และคะแนนการบันทึก (marking) สำหรับแต่ละนักเรียน ข้อมูลจะถูกเก็บไว้ในอาร์เรย์ st ตามลำดับ.

// โปรแกรมมีการคำนวณคะแนนเฉลี่ยโดยใช้ลูป for เพื่อรวมคะแนนการบันทึกของทุกนักเรียนและหาค่าเฉลี่ยโดยนำผลรวม sum หารด้วยจำนวนนักเรียนทั้งหมด.

// โปรแกรมจะใช้ลูป for ในการค้นหาคะแนนที่สูงสุดและคะแนนที่ต่ำสุด โดยใช้ตัวแปร i_max และ i_min เพื่อเก็บตำแหน่งของนักเรียนที่มีคะแนนสูงสุดและต่ำสุด.

// หลังจากที่คำนวณค่าเฉลี่ยและหาคะแนนสูงสุดและต่ำสุดเสร็จสิ้น, โปรแกรมจะแสดงผลลัพธ์โดยแสดงค่าเฉลี่ยคะแนนการบันทึก (average) และคะแนนสูงสุดและต่ำสุดที่พบ (st[i_min].marking และ st[i_max].marking) ในรูปแบบที่กำหนด.