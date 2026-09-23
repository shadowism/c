#include <stdio.h>  
int main()
{
 // 错误！第三个位置空了，没有i++
    for(int i=1; i<=5; )
    {
        printf("%d",i);
    }
    return 0;
}