#include <stdio.h>
int main() {

   int x =12, y = 7, z=12;// กำหนดค่าเริ่มต้นตัวแปร

    printf("x > y = %d\n", x > y); // 12 > 7 จะได้ 1 (true)
    printf("x < y = %d\n", x < y); // 12 < 7 จะได้ 0 (false)
    printf("x == z = %d\n", x == z); // 12 == 12 จะได้ 1 (true)
    printf("x != y = %d\n", x != y); // 12 != 7 จะได้ 1 (true)
    printf("x >= y = %d\n", x >= y); // 12 >= 7 จะได้ 1 (true)
    printf("x <= z = %d\n", x <= z); // 12 <= 12 จะได้ 1 (true)
    printf("!(2*5>=y)||(5!=(5/3)) = %d\n", !(2*5 >= y) || (5 != (5/3))); // !(10 >= 7) || (5 != 1) จะได้ 1 (true)
    printf("!(x < y) = %d\n", !(x < y)); // !(12 < 7) จะได้ 1 (true)
    printf("(x + y) > (z * 2) = %d\n", (x + y) > (z * 2)); // (12 + 7) > (12 * 2) จะได้ 0 (false)
    printf("x %% 2 == 0 = %d\n", x % 2 == 0); // 12 % 2 == 0 จะได้ 1 (true)
    printf("(x + y) && (z < y) = %d\n", (x + y) && (z < y)); // (12 + 7) && (12 < 7) จะได้ 0 (false)


    return 0;
}