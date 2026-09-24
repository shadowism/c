#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int * const p = &a; // 常量指针定义时必须初始化

    // ❌ 编译报错：指针本身是常量，不能改变指向
    // p = &b;

    // ✅ 合法：可以通过指针修改指向变量的值
    *p = 100;
    printf("a 的值：%d\n", a); // 输出 100

    return 0;
}