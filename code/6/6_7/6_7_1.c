#include <stdio.h>

// 计算字符串长度，参数为字符指针
int my_strlen(char *s)
{
    char *start = s;       // 记录字符串起始地址
    while (*s != '\0')     // 没遇到结束符\0就继续向后遍历
    {
        s++;               // 指针向后移动1个字符
    }
    return s - start;      // 尾地址 - 首地址 = 字符个数
}

int main()
{
    char str[] = "hello world";
    int len = my_strlen(str);
    
    printf("字符串：%s\n", str);
    printf("长度：%d\n", len); // 输出 11

    return 0;
}