#include <stdio.h>

int main()
{
    // 定义2行3列的二维数组，按行初始化
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // 外层循环：控制行，一共2行
    for (int i = 0; i < 2; i++)
    {
        // 内层循环：控制列，每行有3列
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]); // 输出第i行第j列的元素
        }
        printf("\n"); // 一行输出完，换行
    }

    return 0;
}
