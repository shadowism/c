#include <stdio.h>

// 函数功能：让外面的指针p，改而指向变量b
void change_ptr(int **pp, int *new_addr)
{
    *pp = new_addr; // *pp 就是外面的一级指针p，直接修改它的指向
}

int main()
{
    int a = 10, b = 20;
    int *p = &a;

    printf("修改前：p指向a，值 = %d\n", *p); // 输出10

    // 传入指针p的地址 + 新的目标地址
    change_ptr(&p, &b);

    printf("修改后：p指向b，值 = %d\n", *p); // 输出20

    return 0;
}