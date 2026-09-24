#include <stdio.h>

int main()
{
    // 字符数组：把"hello"复制一份到栈上的数组中，内容可修改
    char s[] = "hello";
    s[0] = 'H'; // 合法操作
    printf("字符数组修改后：%s\n", s); // 输出 Hello

    // 字符指针：指向只读常量区的"hello"，仅支持读取
    char *p = "hello";
    // p[0] = 'H'; // ❌ 禁止！试图修改只读内存，运行会直接崩溃
    
    printf("字符指针读取：%s\n", p);
    printf("指针指向的地址：%p\n", p);
    printf("数组的首地址：%p\n", s);

    return 0;
}