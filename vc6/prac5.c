/*
 * C语言程序实践（5）：分支、循环、数组、函数的综合运用
 * 张三+25080808
 * VC++ 6.0 可用版本：所有声明放在函数或代码块开头
 */

#include <stdio.h>

int max_of_three(int a, int b, int c);
int min_of_three(int a, int b, int c);
char score_to_grade(int score);
int sum_1_to_n(int n);
int odd_sum_1_to_n(int n);
int even_sum_1_to_n(int n);
void print_array(int arr[], int len);
int max_of_array(int arr[], int len);
int min_of_array(int arr[], int len);
double avg_of_array(int arr[], int len);
void sort_ascend(int arr[], int len);

int main(void)
{
    int a, b, c;                /* 三个整数 */
    int score;                  /* 成绩 */
    int n;                      /* 第3题的上限 */
    int i;                      /* 循环变量 */
    int arr10[10];              /* 第4题：0-9 */
    int arr8[8];                /* 第5题：8 个元素 */
    int ten[10];                /* 奖励题：十个数 */

    /* 第4题和第5题的数组在这里赋值 */
    for (i = 0; i < 10; i++)
    {
        arr10[i] = i;
    }
    arr8[0] = 23; arr8[1] = 45; arr8[2] = 12; arr8[3] = 67;
    arr8[4] = 34; arr8[5] = 89; arr8[6] = 56; arr8[7] = 78;

    /* 第1题：输入三个数，输出最大值和最小值（用函数实现） */
    printf("第1题：输入三个数，输出最大值和最小值\n");
    printf("请输入三个整数：");
    scanf("%d %d %d", &a, &b, &c);
    printf("最大值 = %d，最小值 = %d\n", max_of_three(a, b, c), min_of_three(a, b, c));

    /* 第2题：输入一个成绩，折算成等级 ABCDE */
    printf("\n第2题：输入一个成绩，输出等级\n");
    printf("请输入成绩(0-100)：");
    scanf("%d", &score);
    printf("等级：%c\n", score_to_grade(score));

    /* 第3题：输入 n，输出 1-n 之和、奇数和、偶数和（用函数实现） */
    printf("\n第3题：输入一个数 n，输出 1-n 之和、奇数和、偶数和\n");
    printf("请输入 n：");
    scanf("%d", &n);
    printf("1-%d 之和 = %d\n", n, sum_1_to_n(n));
    printf("奇数之和 = %d，偶数之和 = %d\n", odd_sum_1_to_n(n), even_sum_1_to_n(n));

    /* 第4题：数组赋值 0-9，正序和逆序输出 */
    printf("\n第4题：数组 0-9 正序和逆序输出\n");
    printf("正序：");
    print_array(arr10, 10);
    printf("逆序：");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", arr10[i]);
    }
    printf("\n");

    /* 第5题：8 个整型元素的数组，输出最大值、最小值、平均值 */
    printf("\n第5题：8 个元素数组的最大值、最小值、平均值\n");
    printf("数组：");
    print_array(arr8, 8);
    printf("最大值 = %d，最小值 = %d，平均值 = %.2f\n",
           max_of_array(arr8, 8), min_of_array(arr8, 8), avg_of_array(arr8, 8));

    /* 奖励题：输入十个数，按照升序排列输出 */
    printf("\n奖励题：输入十个数，按照升序排列输出\n");
    printf("请输入十个整数：");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ten[i]);
    }
    sort_ascend(ten, 10);
    printf("升序：");
    print_array(ten, 10);

    return 0;
}

/* 三个数里的最大值 */
int max_of_three(int a, int b, int c)
{
    int max;

    max = a;        /* 先假定 a 最大，再逐个比 */
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}

/* 三个数里的最小值 */
int min_of_three(int a, int b, int c)
{
    int min;

    min = a;        /* 先假定 a 最小，再逐个比 */
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    return min;
}

/* 成绩折算等级：90以上A，80-89 B，70-79 C，60-69 D，60以下E */
char score_to_grade(int score)
{
    if (score >= 90)
    {
        return 'A';
    }
    else if (score >= 80)
    {
        return 'B';
    }
    else if (score >= 70)
    {
        return 'C';
    }
    else if (score >= 60)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

/* 1 累加到 n */
int sum_1_to_n(int n)
{
    int i;
    int sum;

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

/* 1 到 n 里所有奇数的和 */
int odd_sum_1_to_n(int n)
{
    int i;
    int sum;

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
        }
    }
    return sum;
}

/* 1 到 n 里所有偶数的和 */
int even_sum_1_to_n(int n)
{
    int i;
    int sum;

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}

/* 一行打印整个数组 */
void print_array(int arr[], int len)
{
    int i;

    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* 数组最大值 */
int max_of_array(int arr[], int len)
{
    int i;
    int max;

    max = arr[0];
    for (i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

/* 数组最小值 */
int min_of_array(int arr[], int len)
{
    int i;
    int min;

    min = arr[0];
    for (i = 1; i < len; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

/* 数组平均值 */
double avg_of_array(int arr[], int len)
{
    int i;
    int sum;

    sum = 0;
    for (i = 0; i < len; i++)
    {
        sum = sum + arr[i];
    }
    return (double) sum / len;   /* 转成 double 再除，才保留小数 */
}

/* 冒泡排序：把数组排成升序 */
void sort_ascend(int arr[], int len)
{
    int i;
    int j;
    int t;

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])   /* 相邻两个反序就交换 */
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
