#include <stdio.h>
// 按8位打印二进制，方便观察每一位的变化
void printBin(unsigned char x)
{
    int i;
    for (i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    printf("\n");
}
int main()
{
    unsigned char x = 0x0F;        // 0000 1111

    printf("初始值 (位号从 0 开始)       = "); printBin(x);

    x |= (1 << 5);                 // 1. 置一：把第5位改成1
    printf("第5位置一      = "); printBin(x);

    x &= ~(1 << 2);                // 2. 清零：把第2位改成0
    printf("第2位清零      = "); printBin(x);

    x ^= (1 << 7);                 // 3. 翻转：第7位 0变1
    printf("第7位翻转      = "); printBin(x);

    return 0;
}