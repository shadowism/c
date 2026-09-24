#include <stdio.h>

int main()
{
    int scores[5] = {88, 92, 75, 60, 95};
    int *p = scores; // p指向数组第0个元素
    int i;

    // 写法1：下标法（和数组用法完全一致）
    printf("写法1 指针下标访问：");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", p[i]); // 等价于 scores[i]
    }
    printf("\n");

    // 写法2：指针自增遍历（直接移动指针本身）
    printf("写法2 指针自增遍历：");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *p); // 取出当前指针指向的值
        p++;               // 指针向后移动1个int的距离
    }
    printf("\n");

    return 0;
}