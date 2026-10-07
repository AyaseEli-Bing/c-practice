//
// 实践5 奖励题：输入十个数然后按照升序排列输出
// 张三+25080808
// Created by 冰 on 2026/9/30.
//

#include <stdio.h>

int main() {
    int arr[10];
    printf("请输入十个整数：");
    for (int i = 0; i < 10; i++) {  // 依次读入十个数
        scanf("%d", &arr[i]);
    }

    // 冒泡排序：每一轮把相邻两个里较大的往后挪，9 轮之后整体升序
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("升序输出：");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
