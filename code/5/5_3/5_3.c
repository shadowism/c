#include <stdio.h>

// 值传递版本的交换函数：无法修改外面的原变量
void swap_fail(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("函数内：a=%d b=%d\n", a, b); // 函数内部确实交换成功了
}

int main()
{
    int x = 3, y = 5;
    swap_fail(x, y);
    printf("main中：x=%d y=%d\n", x, y); // 外面的原变量完全没变
    return 0;
}
