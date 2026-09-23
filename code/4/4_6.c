#include <stdio.h>

int main()
{
    // 最常用写法：双引号赋值，自动加结束符 '\0'
    char s1[] = "hello";

    // 逐个字符写法，必须手动加 '\0'
    char s2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // 用 %s 直接输出整个字符串
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    return 0;
}
