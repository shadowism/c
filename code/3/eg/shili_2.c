#include <stdio.h>  
int main()
{
    double x = 0.1;
    while(x != 1.0)  // ❌不要用== !=判断小数相等
    {
        x = x + 0.1;
        printf("%f",x);
    }
    
    return 0;
}