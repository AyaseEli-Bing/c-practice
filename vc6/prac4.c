/*
 * C语言程序实践（4）：while、do-while、for 循环
 * 张三+25080808
 * VC++ 6.0 可用版本：循环变量提前声明，for 里不能写 int
 */

#include <stdio.h>

int main(void)
{
    int i;          /* while 循环的循环变量 */
    int j;          /* do-while 循环的循环变量 */
    int sum;        /* 1-100 之和 */
    int even_sum;   /* 偶数之和 */
    int odd_sum;    /* 奇数之和 */
    int both;       /* 同时是 3 和 5 的倍数 */
    int either;     /* 是 3 或 5 的倍数 */

    /* 第1题：1-100 之和（for 循环） */
    sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("第1题：1-100 之和 = %d（for 循环）\n", sum);

    /* 第2题：1-100 之间偶数和奇数之和（while 循环） */
    even_sum = 0;
    odd_sum = 0;
    i = 1;
    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + i;   /* 偶数进 even_sum */
        }
        else
        {
            odd_sum = odd_sum + i;     /* 奇数进 odd_sum */
        }
        i++;
    }
    printf("第2题：偶数之和 = %d，奇数之和 = %d（while 循环）\n", even_sum, odd_sum);

    /* 第3题：1-100 之间 3 和 5 的倍数之和（do-while 循环） */
    /* "3和5的倍数"有两种理解，这里两个都算出来 */
    both = 0;
    either = 0;
    j = 1;
    do                                  /* do-while：先执行一轮再判断条件 */
    {
        if (j % 3 == 0 && j % 5 == 0)
        {
            both = both + j;            /* 15 的倍数 */
        }
        if (j % 3 == 0 || j % 5 == 0)
        {
            either = either + j;        /* 3 的倍数或 5 的倍数 */
        }
        j++;
    }
    while (j <= 100);
    printf("第3题：3和5的公倍数之和 = %d，3或5的倍数之和 = %d（do-while 循环）\n", both, either);

    return 0;
}
