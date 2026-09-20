#include <stdio.h>

int main()
{
    int i = 5, a, b;
    a = i++;        // 先把 5 给 a，然后 i 变成 6：a=5, i=6
    printf("a=%d i=%d\n", a, i);
    b = ++i;        // i 先变成 7，再把 7 给 b：b=7, i=7
    printf("b=%d i=%d\n", b, i);
    return 0;
}