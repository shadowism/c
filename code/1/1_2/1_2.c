#include <stdio.h>
int main()
{
    printf("int    占 %d 字节\n", sizeof(int));//sizeof()函数可以查看变量的字节数量
    printf("float  占 %d 字节\n", sizeof(float));
    printf("double 占 %d 字节\n", sizeof(double));
    printf("char   占 %d 字节\n", sizeof(char));
    return 0;
}