#include <stdio.h>
int main()
{
    int age = 18;
    float height = 1.72f;//f表示单精度浮点数
    char grade = 'a';
    printf("年龄%d岁，身高%.2f米，等级%c", age, height, grade);
    //%d表示整数，%.2f表示浮点数，%c表示字符，%n表示换行
    return 0;
}
