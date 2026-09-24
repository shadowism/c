#include <stdio.h>

int main()
{
    int a = 10;
    const int * const p = &a;

    // ❌ 两者都不能修改
    // *p = 20;
    // p = NULL;

    // ✅ 仅支持读取操作
    printf("只读访问：%d\n", *p);

    return 0;
}