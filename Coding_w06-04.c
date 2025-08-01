#include <stdio.h>

int main() {

    int x, z = 5.0, a = 3.0, y = 2.0;
    double price = 20.0, rate = 300.0, total = 0.0;
    int quantity = 5, discount =1 ;
    int score = 100, mistake = 2, penalty = 3;

    x = 100;
    printf("x: %d\n", x -= 4);

    x = 100;
    printf("x: %d\n", x *= 2);

    x = 100;
    printf("x: %d\n", x %=(y + z*a));

    x = 100;
    printf("x: %.2f\n", (double)x / (2.0 * x));  

  
    printf("total = %.2f\n", total += (price * quantity - discount));

    x = 100;
    printf("x: %d\n", x *= (1 + rate / 100.0));

    printf("score: %d\n", score -= ((1+mistake) * penalty));

    return 0;
}