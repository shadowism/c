#include <stdio.h>

int main()
{
    // 定义一个整型变量，赋值为10
    int a = 10;

    // 直接打印变量的值（我们平时最常用的方式）
    printf("a 的值是：%d\n", a);

    // &a 表示“取变量a的内存地址”，%p 专门用来打印地址（十六进制形式）
    printf("a 的地址是：%p\n", &a);

    return 0;
}