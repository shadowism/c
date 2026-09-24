#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a;    // 一级指针p，指向变量a
    int **pp = &p;  // 二级指针pp，指向一级指针p

    printf("a 的值 = %d\n", a);
    printf("p 存的地址 = %p，*p = %d\n", p, *p);
    printf("pp 存的地址 = %p，*pp 就是p = %p\n", pp, *pp);
    printf("两次解引用 **pp = %d\n", **pp); // 等价于直接写a

    return 0;
}