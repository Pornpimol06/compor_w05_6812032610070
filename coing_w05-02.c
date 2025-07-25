#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลจากผู้ใช้
    char name;              // ตัวอักษรแทนชื่อ
    int age;                // อายุ (จำนวนเต็ม)
    float height;           // ส่วนสูง (ทศนิยม)
    
    char subject[30];       // ชื่อวิชา (string)
    float grade;            // เกรดที่ได้ (ทศนิยม)
    char symbol;            // สัญลักษณ์เกรด เช่น 'A'

    // รับค่าจากผู้ใช้
    printf("Enter your initial (A-Z), age, and height (cm): ");
    scanf(" %c %d %f", &name, &age, &height);  // มีเว้นวรรคหน้า %c เพื่อเคลียร์ช่องว่างจากบรรทัดก่อนหน้า

    printf("Enter subject name, grade, and grade symbol: ");
    scanf("%s %f %c", subject, &grade, &symbol);  // รับชื่อวิชา (string), เกรด, และสัญลักษณ์

    // แสดงผลตามรูปแบบในโจทย์
    printf("%c is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %s, %c got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}
