#include <stdio.h>

int main()
{
    // 1. 定义并初始化一维数组：5个int类型的连续空间
    int a[5] = {10, 20, 30, 40, 50};

    // 2. 访问单个元素（通过下标）
    printf("第1个元素 a[0] = %d\n", a[0]);  // 下标从0开始
    printf("第3个元素 a[2] = %d\n", a[2]);

    // 3. 修改数组中的元素
    a[1] = 21;
    printf("修改后第2个元素 a[1] = %d\n", a[1]);

    // 4. 遍历数组（循环访问下标 0 ~ 4）
    printf("\n遍历整个数组：");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
