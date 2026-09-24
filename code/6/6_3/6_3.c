#include <stdio.h>

int main()
{
    // 定义一个数组作为共同的内存起点
    int arr[3] = {10, 20, 30};

    // 三种不同类型的指针，都指向同一起始地址
    int *pi = arr;       // int型指针，步长=4字节
    char *pc = (char*)arr; // char型指针，步长=1字节
    double *pd = (double*)arr; // double型指针，步长=8字节

    // 打印 指针 和 指针+1 的地址，观察差值
    printf("int*  原地址: %p  | +1后: %p  | 相差 %lld 字节\n",
           pi, pi+1, (long long)(pi+1) - (long long)pi);

    printf("char* 原地址: %p  | +1后: %p  | 相差 %lld 字节\n",
           pc, pc+1, (long long)(pc+1) - (long long)pc);

    printf("double* 原地址: %p | +1后: %p | 相差 %lld 字节\n",
           pd, pd+1, (long long)(pd+1) - (long long)pd);

    return 0;
}