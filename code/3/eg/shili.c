#include <stdio.h>  

int main()
{
    int i = 1;
while(i <= 5)
{
    printf("%d",i);
    // 这里漏写 i++
}
    return 0;
}   
