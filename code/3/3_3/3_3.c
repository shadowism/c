#include <stdio.h>
int main(void)
{
    int sum = 0;   // 累加器必须初始化为0
    for(int i = 1; i <= 100; i++)
    {
        sum += i;  //等价 sum = sum + i
    }
    printf("1到100的和 = %d\n", sum);
    return 0;
}