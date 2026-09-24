#include <stdio.h>

int main()
{
    int a = 10;

    // 定义一个指针变量 p
    // int * 表示：这个指针只能指向 int 类型的变量
    int *p;

    // 把变量a的地址，赋值给指针p
    // 此时就说：p 指向了 a
    p = &a;

    printf("变量a的值：%d\n", a);
    printf("变量a的地址：%p\n", &a);
    printf("指针p里存的地址：%p\n", p);
    printf("指针p自己的地址：%p\n", &p); // 指针本身也是变量，也有自己的地址

    return 0;
}