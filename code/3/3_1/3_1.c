#include <stdio.h>
int main(void)
{
    int i = 6;         // 初始化变量
    while(i <= 5)      // 先判断条件，成立才进入循环体
    {
        printf("%d ", i);
        i++;           // 步进，不要忘记！否则死循环
    }
    return 0;
}