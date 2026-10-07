//
// C语言程序实践（4）：while、do-while、for 循环
// 张三+25080808
// Created by 冰 on 2026/9/30.
//

#include <stdio.h>

int main() {
    // 第1题：1-100 之和（for 循环）
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    printf("第1题：1-100 之和 = %d（for 循环）\n", sum);

    // 第2题：1-100 之间偶数和奇数之和（while 循环）
    int even_sum = 0;
    int odd_sum = 0;
    int i = 1;
    while (i <= 100) {
        if (i % 2 == 0) {  // 偶数进 even_sum
            even_sum = even_sum + i;
        } else {  // 奇数进 odd_sum
            odd_sum = odd_sum + i;
        }
        i++;
    }
    printf("第2题：偶数之和 = %d，奇数之和 = %d（while 循环）\n", even_sum, odd_sum);

    // 第3题：1-100 之间 3 和 5 的倍数之和（do-while 循环）
    // 说明："3和5的倍数"有两种理解，这里两个都算出来：
    //   both   = 同时是 3 和 5 的倍数（也就是 15 的倍数）
    //   either = 是 3 的倍数或者 5 的倍数
    int both = 0;
    int either = 0;
    int j = 1;
    do {  // do-while：先执行一轮再判断条件
        if (j % 3 == 0 && j % 5 == 0) {
            both = both + j;
        }
        if (j % 3 == 0 || j % 5 == 0) {
            either = either + j;
        }
        j++;
    } while (j <= 100);
    printf("第3题：3和5的公倍数之和 = %d，3或5的倍数之和 = %d（do-while 循环）\n", both, either);

    return 0;
}
