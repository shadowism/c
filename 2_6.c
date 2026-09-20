#include <stdio.h>
int main()
{
    int a = 12, b = 10;   // 二进制: a=1100, b=1010

    printf("a & b = %d\n", a & b);    // 按位与:   1100 & 1010 = 1000 = 8
    printf("a | b = %d\n", a | b);    // 按位或:   1100 | 1010 = 1110 = 14
    printf("a ^ b = %d\n", a ^ b);    // 按位异或: 1100 ^ 1010 = 0110 = 6
    printf("~a    = %d\n", ~a);       // 按位取反: ~0000...1100 = -13
    printf("a << 2 = %d\n", a << 2);  // 左移2位:  110000 = 48，相当于 a * 4,2的2次方
    printf("a >> 2 = %d\n", a >> 2);  // 右移2位:  11 = 3，相当于 a / 4,2的-2次方

    // 实用技巧1: 异或交换两个数（不需要临时变量）
    printf("交换前: a=%d, b=%d\n", a, b);
    a = a ^ b;    // a 变成 a^b
    b = a ^ b;    // b = (a^b)^b = a
    a = a ^ b;    // a = (a^b)^a = b
    printf("交换后: a=%d, b=%d\n", a, b);

    // 实用技巧2: 用 & 1 判断奇偶（比 n % 2 更快）
    int n = 7;
    if (n & 1)
        printf("%d 是奇数\n", n);
    else
        printf("%d 是偶数\n", n);

    return 0;
}