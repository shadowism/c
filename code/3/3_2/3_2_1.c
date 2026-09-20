#include <stdio.h>
int main(void)
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;  // 跳出整个for循环，循环不再继续
        }
        printf("i = %d\n", i);
    }
    printf("循环结束\n");
    return 0;
}