#include <stdio.h>
int main()
{
   int a = 3, b = 5, max;
    max = (a > b) ?  b: a;    // 等价于一段 if-else，a>b判断为真取a，否则取b
    printf("max=%d\n", max);
    return 0;
}