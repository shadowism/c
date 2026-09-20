#include <stdio.h>
 int main()
 {
    int a = 5, b = 2;
    printf("%d\n", a + b);            // 整数加法：7
    printf("%d\n", a - b);            // 整数减法：3
    printf("%d\n", a * b);            // 整数乘法：10
    printf("%d\n", a / b);            // 整数除法：2
    printf("%f\n", (double)a / b);    // 把 a 强制转成 double：2.500000
    printf("%d\n", a % b);            // 整数取余：1
    return 0;
 }