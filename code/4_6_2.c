#include <stdio.h>

int my_strlen(char s[])
{
    int i = 0;
    while (s[i] != '\0')  // 遇到结束符就停止
    {
        i++;
    }
    return i;
}

int main()
{
    char str[] = "china";
    printf("长度 = %d\n", my_strlen(str));
    return 0;
}
