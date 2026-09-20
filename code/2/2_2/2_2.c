#include <stdio.h>

int main()
{
    int a = 15;
    // 加法
    a = a + 10;
    printf("%d\n", a);
    a += 10;
    printf("%d\n", a);
    // 减法
    a -= 10;
    printf("%d\n", a);
    a = a - 10;
    printf("%d\n", a);
    // 乘法
    a *= 2;
    printf("%d\n", a);
    a = a * 2;
    printf("%d\n", a);
    // 除法
    a /= 2;
    printf("%d\n", a);
    a = a / 2;
    printf("%d\n", a);
    // 取余
    a %= 2;
    printf("%d\n", a);
    a = a % 2;
    printf("%d\n", a);
    return 0;
}
