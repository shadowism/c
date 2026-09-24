#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    const int *p = &a;

    // ❌ 编译报错：不能通过指针修改指向的值
    // *p = 100;

    // ✅ 合法：指针本身可以修改，切换指向另一个变量
    p = &b;
    printf("p 现在指向的值：%d\n", *p); // 输出 20

    return 0;
}
