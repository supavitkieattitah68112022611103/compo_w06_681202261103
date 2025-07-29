#include <stdio.h>

int main() {

    double x =1.0, y = 2.0,z; // กำหนดค่าเริ่มต้นตัวแปร

    printf("x = %.1f, y = %.1f\n", x, y); // แสดงตัวแปรค่าเริ่มต้น // x=1.0, y=2.0

    x = y + 5.0;
    printf("x = y + 5.0 = %.1f\n", x);          //i=7.0, y=2.0

    y = x / 2.0;
    printf("y = x / 2.0 = %.1f\n", y);          // x=7.0, y=3.5

    y = (x * 3.0)+4.0;
    printf("y = (x * 3.0) + 4.0 = %.1f\n", y);  //x=7.0, y=25.0

    x = -0.5 -y;
    printf("x = -0.5 - y = %.1f\n", x);         // x=-25.5, y=25.0

    z = x + y;
    printf("z = x + y = %.1f\n", z);            // x=-25.5, y=25.0, z=-0.5


    return 0;
}