#include <stdio.h>

// 打印数组函数：必须额外传数组长度 n
void printArray(int a[], int n)
{
    // 函数里用 sizeof 测不出数组总大小，只能测出指针大小
    printf("函数内 sizeof(a) = %zu 字节\n", sizeof(a));

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// 修改数组元素的函数
void modifyArray(int a[], int n)
{
    // 直接修改数组元素，会影响外面的原数组
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] * 2; // 每个元素乘2
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("main里 sizeof(arr) = %zu 字节\n", sizeof(arr));
    printf("原数组：");
    printArray(arr, len);

    // 调用修改函数
    modifyArray(arr, len);

    printf("修改后原数组：");
    printArray(arr, len);

    return 0;
}
