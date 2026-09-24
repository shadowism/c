#include <stdio.h>

int main()
{
    int x = 5;

    int *p1 = &x; // p1 指向 x
    int *p2 = &x; // p2 也指向 x

    // 通过p1修改值
    *p1 = 10;
    printf("用p1修改后，x = %d\n", x);

    // 通过p2修改值
    *p2 = 20;
    printf("用p2修改后，x = %d\n", x);

    // 验证两个指针存的是同一个地址
    printf("p1存的地址：%p\n", p1);
    printf("p2存的地址：%p\n", p2);

    return 0;
}