#include <stdio.h>
int main(void)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue; // 结束本次循环，直接去执行i++，进入下一轮判断
        }
        printf("i = %d\n", i);
    }
    printf("循环结束\n");
    return 0;
}