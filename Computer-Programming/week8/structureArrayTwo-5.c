#include<stdio.h>

#define SIZE 10



int main() {

    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[10];
    int i,i_max,i_min;
    float average=0,sum=0;

    printf(" *** Structure Array 2 ***\n");
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
    //find number of students who get max marking
    int count=0;
    for(i=0;i<SIZE;i++) {
        if(st[i].marking == st[i_max].marking) {
            count++;
        }
    }

    printf("\n\n *** Analyzing Data ***\n");
    printf("Max marking   = %d points, %d students.\n",st[i_max].marking,count);
    int j = 0;
    for(i=0;i<SIZE;i++) {
        
        if(st[i].marking == st[i_max].marking) {
            printf("%d. %s %s %d\n",j+1,st[i].id,st[i].name,st[i].marking);
            j++;
        }
    }
    return 0;

}

// โปรแกรมนี้เป็นโปรแกรมที่จัดการข้อมูลของนักเรียนและมีวัตถุประสงค์ในการหาคะแนนสูงสุดของนักเรียนและนับจำนวนนักเรียนที่ได้คะแนนสูงสุดนั้น โดยใช้โครงสร้าง (structure) และทำการแสดงผลข้อมูลดังนี้:

// โปรแกรมจะประกาศโครงสร้าง student ซึ่งประกอบด้วย 3 สมาชิก: id (รหัสนักเรียน), name (ชื่อนักเรียน), และ marking (คะแนนการบันทึก).

// โปรแกรมจะประกาศตัวแปร st เป็นอาร์เรย์ของโครงสร้าง student ที่มีขนาด 10 เป็นตัวแปรที่ใช้เก็บข้อมูลของนักเรียน และตัวแปร i, i_max, count, average, sum สำหรับการทำงานต่างๆ.

// โปรแกรมจะแสดงข้อความ " *** Structure Array 2 ***\nEnter data : " เพื่อขอให้ผู้ใช้ป้อนข้อมูลของนักเรียน โดยใช้ลูป for เพื่อรับข้อมูลรหัสนักเรียน (id), ชื่อนักเรียน (name), และคะแนนการบันทึก (marking) สำหรับแต่ละนักเรียน ข้อมูลจะถูกเก็บไว้ในอาร์เรย์ st ตามลำดับ.

// โปรแกรมมีการคำนวณคะแนนสูงสุดโดยใช้ลูป for เพื่อหานักเรียนที่มีคะแนนสูงสุดและเก็บตำแหน่งของนักเรียนที่มีคะแนนสูงสุดในตัวแปร i_max.

// โปรแกรมจะนับจำนวนนักเรียนที่ได้คะแนนสูงสุดโดยใช้ลูป for เพื่อนับจำนวนนักเรียนที่มีคะแนนเท่ากับคะแนนสูงสุดและเก็บจำนวนนักเรียนที่ได้คะแนนสูงสุดในตัวแปร count.

// หลังจากนั้น, โปรแกรมจะแสดงผลลัพธ์โดยแสดงคะแนนสูงสุด (st[i_max].marking) และจำนวนนักเรียนที่ได้คะแนนสูงสุด (count) ในรูปแบบที่กำหนด.

// โปรแกรมจะใช้ลูป for อีกครั้งเพื่อแสดงรายละเอียดของนักเรียนที่ได้คะแนนสูงสุด โดยแสดงรหัสนักเรียน (id), ชื่อนักเรียน (name), และคะแนนการบันทึก (marking) ของนักเรียนที่ได้คะแนนสูงสุด.