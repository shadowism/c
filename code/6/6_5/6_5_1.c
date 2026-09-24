#include <stdio.h>

void calc(int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    *diff = a - b;
}

int main()
{
    int s, d;
    calc(10, 4, &s, &d);
    printf("和=%d 差=%d", s, d);
    return 0;
}