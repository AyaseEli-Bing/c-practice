#include "stdafx.h"

/*
 * C语言程序实践（2）：程序流程图对应的代码
 * 张三+25080808
 * VC++ 6.0 可用版本：声明全部放在函数开头
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;          /* 循环变量 */
    int sum;        /* 累加结果 */
    char user[32];  /* 账号 */
    char pass[32];  /* 密码 */
    int count;      /* 登录失败的次数 */

    /* 第1题：1-100 之和 */
    i = 1;
    sum = 0;
    while (i <= 100)
    {
        sum = sum + i;   /* 把当前 i 累加进 sum */
        i = i + 1;       /* i 往后走一步 */
    }
    printf("第1题：1-100 之和 = %d\n", sum);

    /* 第2题：1-100 之间偶数之和 */
    i = 1;
    sum = 0;
    while (i <= 100)
    {
        if (i % 2 == 0)          /* 是偶数才累加 */
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    printf("第2题：1-100 之间偶数之和 = %d\n", sum);

    /* 第3题：1-100 之间 3 和 5 的倍数之和，按"同时被 3 和 5 整除"计算 */
    i = 1;
    sum = 0;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)   /* 同时是 3 和 5 的倍数才累加 */
        {
            sum = sum + i;
        }
        i = i + 1;
    }
    printf("第3题：1-100 之间 3 和 5 的公倍数之和 = %d\n", sum);

    /* 第4题：app 登录验证 */
    /* 正确账号 admin、正确密码 123456，输错 3 次锁定账号 */
    count = 0;
    while (1)
    {
        printf("请输入账号：");
        scanf("%31s", user);
        printf("请输入密码：");
        scanf("%31s", pass);

        /* 账号和密码都对才算验证正确 */
        if (strcmp(user, "admin") == 0 && strcmp(pass, "123456") == 0)
        {
            printf("验证正确，登录成功进主页\n");
            break;
        }

        count = count + 1;   /* 验证失败，记一次错误 */
        if (count < 3)
        {
            printf("验证不正确，还可以再试 %d 次\n", 3 - count);
        }
        else
        {
            printf("错误次数太多，锁定账号\n");
            break;
        }
    }

    return 0;
}
