#include <stdio.h>

// 全局变量：定义在所有函数的外面
int g_val = 10;

// 1. 普通局部变量演示
void testLocal()
{
    int a = 0;  // 每次调用函数都会重新创建、重新初始化为0
    a++;
    printf("普通局部变量a = %d\n", a);
}

// 2. 静态局部变量演示（对应图中 countCalls 例子）
void testStatic()
{
    static int cnt = 0;  // 只在第一次调用时初始化1次，之后保留上次的值
    cnt++;
    printf("静态局部变量cnt = %d\n", cnt);
}

int main()
{
    printf("全局变量g_val = %d\n", g_val);

    printf("\n--- 连续调用3次普通局部变量函数 ---\n");
    testLocal();
    testLocal();
    testLocal();

    printf("\n--- 连续调用3次静态局部变量函数 ---\n");
    testStatic();
    testStatic();
    testStatic();

    return 0;
}
