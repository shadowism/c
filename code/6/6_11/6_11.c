#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30};
    int *p;

    // 1. *p++  等价于 *(p++)：先取值，再移动指针
    p = arr;
    printf("*p++ = %d  ", *p++);
    printf("执行后p指向：%d\n", *p); // p已经后移，指向20

    // 2. (*p)++ ：把指向的值+1，指针不动
    p = arr;
    printf("(*p)++ = %d  ", (*p)++);
    printf("执行后p指向：%d，arr[0]变成：%d\n", *p, arr[0]); // 值变11，p仍指向首元素

    // 3. *++p  等价于 *(++p)：指针先移动，再取值
    p = arr;
    printf("*++p = %d  ", *++p);
    printf("执行后p指向：%d\n", *p); // p先移到第2个元素，再取值20

    // 4. ++*p  等价于 ++(*p)：值先+1，再取新值
    p = arr;
    printf("++*p = %d  ", ++*p);
    printf("执行后p指向：%d，arr[0]变成：%d\n", *p, arr[0]); // 值变成12，指针不动

    return 0;
}