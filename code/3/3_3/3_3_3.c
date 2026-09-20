#include <stdio.h>
int main(void)
{
    int a[5] = {3, 9, 2, 7, 5};
    int max = a[0]; //擂台初始化：拿第一个数当初始冠军

    //从第2个元素（下标i=1）开始挨个上台比武
    for(int i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i]; //新选手更大，替换冠军
        }
    }
    printf("数组最大值 = %d\n", max);
    return 0;
}