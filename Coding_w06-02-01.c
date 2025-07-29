#include <stdio.h>

int main() {


    int i = 1, j = 2, k; // กำหนดค่าเริ่มต้นตัวแปร

    printf("i = %d, j = %d, k = %d\n", i, j,k); // แสดงตัวแปรค่าเริ่มต้น // i=1, j=2, k=0

    k = i + j;
    printf("k = i + j = %d\n", k); // 1 + 2 จะได้ 3                  //i=1, j=2, k=3

    i = i + (k * j);
    printf("i = i + (k * j) = %d\n", i);// 1 + (3 * 2) จะได้ 7       // i=7, j=2, k=3

    j = i/2;
    printf("j = i / 2 = %d\n", j); // 7 / 2 จะได้ 3                  // i=7, j=3, k=3

    k = i % 2;
    printf("k = i %% 2 = %d\n", k); // 7 % 2 จะได้ 1                 // i=7, j=3, k=1

    i = (j + k) * 3;
    printf("i = (j + k) * 3 = %d\n", i); // (3 + 1) * 3 จะได้ 12     // i=12, j=3, k=1

    return 0;
}