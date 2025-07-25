#include <stdio.h>

int main() {
    // ประกาศตัวแปร name เพื่อเก็บตัวอักษรตัวแรกของชื่อ
    char name = 'O';           

    // ประกาศตัวแปร age เพื่อเก็บอายุ (จำนวนเต็ม)
    int age = 19;              

    // ประกาศตัวแปร weight เพื่อเก็บน้ำหนัก (จำนวนทศนิยม)
    float weight = 90.5;       

    // แสดงผลบรรทัดที่ 1: ชื่อและอายุ
    printf("Student %c is %d years old.\n", name, age);

    // แสดงผลบรรทัดที่ 2: น้ำหนัก
    printf("His weighs is %.1f kg.\n", weight);

    return 0;
}
