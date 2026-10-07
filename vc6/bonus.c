/*
 * 实践5 奖励题：输入十个数然后按照升序排列输出
 * 张三+25080808
 * VC++ 6.0 可用版本：循环变量提前声明
 */

#include <stdio.h>

int main(void)
{
    int arr[10];    /* 十个数 */
    int i;          /* 外层循环 */
    int j;          /* 内层循环 */
    int t;          /* 交换用的临时变量 */

    printf("请输入十个整数：");
    for (i = 0; i < 10; i++)      /* 依次读入十个数 */
    {
        scanf("%d", &arr[i]);
    }

    /* 冒泡排序：每一轮把相邻两个里较大的往后挪，9 轮之后整体升序 */
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("升序输出：");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
