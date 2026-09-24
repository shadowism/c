#include <stdio.h>

// 模拟一个可能返回空指针的函数
int* get_data(int flag)
{
    static int value = 100;
    if (flag == 1)
        return &value; // 正常返回有效地址
    else
        return NULL;    // 返回空，表示数据无效
}

int main()
{
    int *p = get_data(0);

    // 核心安全规范：拿到指针先判空，绝不直接解引用
    if (p != NULL)
    {
        printf("读取成功：%d\n", *p);
    }
    else
    {
        printf("指针为空，禁止访问！\n");
    }

    p = get_data(1);
    if (p != NULL)
    {
        printf("读取成功：%d\n", *p);
    }

    return 0;
}