/*
 * C语言程序实践（3）：选择结构
 * 张三+25080808
 * VC++ 6.0 可用版本：声明全部放在函数开头
 */

#include <stdio.h>

int main(void)
{
    int a, b, c;    /* 三个数 */
    int max;        /* 最大值 */
    int min;        /* 最小值 */
    int score;      /* 成绩 */
    int t;          /* 交换用的临时变量 */

    /* 第1题：输入三个数，输出最大值和最小值 */
    printf("第1题：输入三个数，输出最大值和最小值\n");
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    max = a;        /* 先假定 a 最大，再逐个比 */
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    min = a;        /* 先假定 a 最小，再逐个比 */
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    printf("最大值 = %d，最小值 = %d\n", max, min);

    /* 第2题：输入一个成绩，折算成等级 ABCDE */
    printf("\n第2题：输入一个成绩，输出等级\n");
    printf("请输入成绩(0-100)：");
    scanf("%d", &score);

    /* 从高往低分档，命中一档就停 */
    if (score >= 90)
    {
        printf("等级：A\n");
    }
    else if (score >= 80)
    {
        printf("等级：B\n");
    }
    else if (score >= 70)
    {
        printf("等级：C\n");
    }
    else if (score >= 60)
    {
        printf("等级：D\n");
    }
    else
    {
        printf("等级：E\n");
    }

    /* 第3题（加分项）：输入三个数，按照升序输出 */
    /* 思路：三对两两比较，顺序反了就交换，三轮之后保证 a <= b <= c */
    printf("\n第3题：输入三个数，按照升序输出\n");
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        t = a; a = b; b = t;
    }
    if (a > c)
    {
        t = a; a = c; c = t;
    }
    if (b > c)
    {
        t = b; b = c; c = t;
    }
    printf("升序输出：%d %d %d\n", a, b, c);

    return 0;
}
