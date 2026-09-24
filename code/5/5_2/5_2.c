#include <stdio.h>

// 函数声明（原型）：告诉编译器有这个函数，分号结尾
int add(int a, int b);

int main()
{
    // 函数调用：3 和 5 是实际参数，用变量接收返回结果
    int result = add(3, 5);
    printf("计算结果：%d\n", result);
    return 0;
}

// 函数定义：函数的具体代码实现
int add(int a, int b)
{
    int sum = a + b;
    return sum; // return 把计算结果送回调用的地方
}
