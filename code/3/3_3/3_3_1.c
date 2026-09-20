#include <stdio.h>
int main(void)
{
    // 5个同学分数
    int score[5] = {80, 55, 40, 90, 59};
    int cnt = 0;  //计数器初始0，用来记录不及格数量

    for(int i = 0; i < 5; i++)
    {
        if(score[i] < 60)
        {
            cnt++; //满足条件，计数+1
        }
    }
    printf("不及格人数：%d\n", cnt);
    return 0;
}