#include <stdio.h>

int main()
{
    char c = 'A';       // 字符型，占1字节
    int num = 100;      // 整型，通常占4字节
    double score = 95.5;// 双精度浮点型，通常占8字节

    // 分别打印：变量的值、变量的首地址、变量占用的内存字节数
    printf("字符 c 的值：%c，地址：%p，占用 %zu 字节\n", c, &c, sizeof(c));
    printf("整数 num 的值：%d，地址：%p，占用 %zu 字节\n", num, &num, sizeof(num));
    printf("浮点数 score 的值：%.1lf，地址：%p，占用 %zu 字节\n", score, &score, sizeof(score));

    return 0;
}