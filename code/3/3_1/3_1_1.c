#include <stdio.h>
int main(void)
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while(i <= 5);   // ⚠️末尾必须写分号，基础学生最容易踩坑
    return 0;
}