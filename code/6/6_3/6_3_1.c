#include <stdio.h>

int main()
{
    int num = 0x12345678; // 一个4字节的整数
    char *p = (char*)&num; // 用char指针指向这个int的首地址

    // char*步长是1，所以可以逐个读出4个字节
    printf("第1个字节：0x%x\n", (unsigned char)*p);
    printf("第2个字节：0x%x\n", (unsigned char)*(p+1));
    printf("第3个字节：0x%x\n", (unsigned char)*(p+2));
    printf("第4个字节：0x%x\n", (unsigned char)*(p+3));

    return 0;
}