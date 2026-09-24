#include <stdio.h>

// 递归求阶乘：数学定义 n! = n * (n-1)!，规定 0! = 1
int factorial(int n)
{
    if (n <= 1)
        return 1;              // ① 终止条件：到1就不再递归
    return n * factorial(n - 1); // ②③ 缩小问题规模 + 回归组合结果
}

int main()
{
    int n = 4;
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}
