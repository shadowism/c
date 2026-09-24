#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a; // 定义指针的同时初始化，让p指向a

    printf("修改前，a的值 = %d\n", a);

    // *p 表示：访问p指向的那块内存空间
    // 这里等价于 a = 20;
    *p = 20;

    printf("修改后，a的值 = %d\n", a);
    printf("通过指针读取的值 = %d\n", *p);

    return 0;
}