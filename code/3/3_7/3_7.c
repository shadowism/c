#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)   // 第 i 行有 i 颗星
            printf("*");
        printf("\n");                 // 每行结束换行
    }
    return 0;
}