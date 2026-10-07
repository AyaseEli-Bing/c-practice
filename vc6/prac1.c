#include "stdafx.h"

/*
 * C语言程序实践（1）：基本输出
 * 张三+25080808
 * VC++ 6.0 可用版本：声明全部放在函数开头，注释一律用块注释
 */

#include <stdio.h>

int main(void)
{
    /* 第1题：输出 Hello World */
    printf("Hello World!\n");

    /* 第2题：输出阶梯形 *****，四行，每行缩进多 3 个空格 */
    printf("*****\n");
    printf("   *****\n");
    printf("       *****\n");
    printf("           *****\n");

    /* 第3题：按照专业、班级、姓名、学号输出 */
    printf("专业：示例专业\n");
    printf("班级：示例班级\n");
    printf("姓名：张三\n");
    printf("学号：25080808\n");

    return 0;
}
