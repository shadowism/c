#include <stdio.h>
int main(void)
{
    int product = 1; //累乘积初始化为1
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        product *= i; //等价 product = product * i
    }
    printf("%d! = %d\n", n, product);
    return 0;
}