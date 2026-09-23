#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // 自动计算数组元素个数

    printf("排序前：");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // 冒泡排序核心：双重循环
    for (int i = 0; i < n - 1; i++)          // 外层：共 n-1 轮
    {
        for (int j = 0; j < n - 1 - i; j++)  // 内层：每轮只比未排序部分
        {
            if (arr[j] > arr[j + 1])         // 前大后小，交换位置
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("排序后：");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
