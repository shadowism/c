#include <stdio.h>

// const char* 表示：函数内只会读取字符串，绝不会修改内容
void print_str(const char *s)
{
    // ❌ 函数内禁止修改字符串内容
    // *s = 'H';

    // ✅ 指针本身可以移动遍历
    while (*s != '\0')
    {
        putchar(*s);
        s++;
    }
    putchar('\n');
}

int main()
{
    char str[] = "hello world";
    print_str(str);
    return 0;
}