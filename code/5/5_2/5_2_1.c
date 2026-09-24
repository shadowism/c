#include <stdio.h>

// 无返回值、无参数的函数声明
void printHi(void);

int main()
{
    printHi(); // 直接调用，不用变量接收结果
    return 0;
}

// void 表示没有返回值，函数里不需要写 return
void printHi(void)
{
    printf("Hi，我是函数\n");
}
