#include <stdio.h>
int main()
{
   int a = 5, b = 2;
    printf("%d\n", a / b);            // 整数除以整数，结果仍是整数：2
    printf("%f\n", (double)a / b);    // 把 a 强制转成 double：2.500000
    printf("%d\n", a / 2.0);   
    printf("%f\n", a / 2.0);      // 除以 2.0 触发浮点转换：2.500000
}
