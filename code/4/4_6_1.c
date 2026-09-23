#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "abc";
    char b[20];

    // 1. 求长度 strlen
    printf("长度：%d\n", strlen(a));

    // 2. 复制 strcpy
    strcpy(b, "test");
    printf("复制后b = %s\n", b);

    // 3. 拼接 strcat
    strcat(a, "123");
    printf("拼接后a = %s\n", a);

    // 4. 比较 strcmp
    if (strcmp(a, "abc123") == 0)
        printf("两个字符串相等\n");

    return 0;
}
