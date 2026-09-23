#include <stdio.h>

int main()
{
    // 定义成绩数组并初始化
    int score[5] = {76, 88, 62, 95, 81};
    // sum：累加和  max：最大值（初始化为第一个元素）  cnt：不及格人数计数器
    int sum = 0, max = score[0], cnt = 0;

    // 一次遍历完成多个操作
    for (int i = 0; i < 5; i++)
    {
        sum += score[i];                  // 1. 累加求和

        if (score[i] > max)               // 2. 找最大值
            max = score[i];

        if (score[i] < 60)                // 3. 统计不及格（小于60分）人数
            cnt++;
    }

    // 输出结果：平均保留1位小数，除以5.0触发浮点数除法
    printf("平均%.1f 最高%d 不及格%d人\n", sum / 5.0, max, cnt);

    return 0;
}
