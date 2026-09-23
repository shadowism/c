#include <stdio.h>

int main()
{
    // 前提：数组必须是**从小到大排好序**的
    int a[5] = {10, 20, 30, 40, 50};
    int key = 30;          // 我们要找的数
    int left = 0;          // 左边界下标
    int right = 4;         // 右边界下标
    int result = -1;       // 存找到的下标，-1代表还没找到

    while (left <= right)
    {
        int mid = (left + right) / 2;  // 算出中间位置的下标

        if (a[mid] == key)
        {
            result = mid;   // 找到了，记录下标
            break;          // 直接结束循环
        }
        else if (a[mid] < key)
        {
            left = mid + 1; // 目标数更大，去右半边找
        }
        else
        {
            right = mid - 1;// 目标数更小，去左半边找
        }
    }

    if (result != -1)
        printf("找到了 %d，它的下标是 %d\n", key, result);
    else
        printf("数组里没有 %d\n", key);

    return 0;
}
