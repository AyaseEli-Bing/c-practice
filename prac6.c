//
// 课程设计总结（6）：用循环菜单把本门课所有实践项目整合在一个程序中
// 张三+25080808
//

#include <stdio.h>

void task1_hello(void);

void task2_stars(void);

void task3_info(void);

void task4_sum_100(void);

void task5_even_odd(void);

void task6_mul_3_and_5(void);

void task7_max_min_three(void);

void task8_grade(void);

void task9_sort_three(void);

void task10_sum_n(void);

void task11_array_0_9(void);

void task12_array_8(void);

void task13_sort_ten(void);

void task14_mul_table(void);

void print_array(int arr [],int len);

int main()
    {
        // 张三+25080808
        int choice=- 1;
        while(choice!=0)  // 菜单循环，输 0 才退出
            {
                printf ("\n================= 课程设计总结菜单 =================\n");
                printf (" 1  输出 Hello World（实践1第1题）\n");
                printf (" 2  输出 *****（实践1第2题）\n");
                printf (" 3  输出专业、班级、姓名、学号（实践1第3题）\n");
                printf (" 4  1-100 之和（for 循环）\n");
                printf (" 5  1-100 之间偶数和奇数之和（while 循环）\n");
                printf (" 6  1-100 之间 3 和 5 的倍数之和（do-while 循环）\n");
                printf (" 7  输入三个数，输出最大值和最小值\n");
                printf (" 8  输入成绩，折算成等级 ABCDE\n");
                printf (" 9  输入三个数，按照升序输出\n");
                printf (" 10 输入 n，输出 1-n 之和、奇数和、偶数和\n");
                printf (" 11 数组 0-9 正序和逆序输出\n");
                printf (" 12 8 个元素数组的最大值、最小值、平均值\n");
                printf (" 13 输入十个数，按照升序排列输出\n");
                printf (" 14 九九乘法表（实践之外的新增功能）\n");
                printf (" 0  退出\n");
                printf ("===================================================\n");
                printf ("请输入编号：");
                int ret=scanf ("%d",& choice);
                if(ret==EOF)
                    {
                        choice=0;  // 输入已结束（比如 Ctrl+D），按退出处理
                    }
                else if(ret!=1)
                    {
                        // 输入的不是数字时 scanf 不会消耗它，不丢掉的话下一轮还会读到同一个坏字符，变成死循环
                        int c;
                        while((c=getchar())!='\n'&&c!=EOF)
                            {
                            }
                        choice=-1;  // 走"编号不对"分支
                    }

                switch(choice)
                    {
                        case 1: task1_hello();
                            break;
                        case 2: task2_stars();
                            break;
                        case 3: task3_info();
                            break;
                        case 4: task4_sum_100();
                            break;
                        case 5: task5_even_odd();
                            break;
                        case 6: task6_mul_3_and_5();
                            break;
                        case 7: task7_max_min_three();
                            break;
                        case 8: task8_grade();
                            break;
                        case 9: task9_sort_three();
                            break;
                        case 10: task10_sum_n();
                            break;
                        case 11: task11_array_0_9();
                            break;
                        case 12: task12_array_8();
                            break;
                        case 13: task13_sort_ten();
                            break;
                        case 14: task14_mul_table();
                            break;
                        case 0: printf ("程序结束，再见！\n");
                            break;
                        default: printf ("编号不对，请重新输入！\n");
                            break;
                    }
            }
        return 0;
    }

// 张三+25080808
// 编号1：输出 Hello World（实践1第1题）
void task1_hello(void)
    {
        printf ("Hello World!\n");
    }

// 张三+25080808
// 编号2：输出 *****（实践1第2题）
void task2_stars(void)
    {
        printf ("*****\n");
        printf ("   *****\n");
        printf ("       *****\n");
        printf ("           *****\n");
    }

// 张三+25080808
// 编号3：按照专业、班级、姓名、学号输出（实践1第3题）
void task3_info(void)
    {
        printf ("专业：示例专业\n");
        printf ("班级：示例班级\n");
        printf ("姓名：张三\n");
        printf ("学号：25080808\n");
    }

// 张三+25080808
// 编号4：1-100 之和（for 循环，实践4第1题）
void task4_sum_100(void)
    {
        int sum=0;
        for(int i=1; i<=100; i++)
            {
                sum=sum+i;
            }
        printf ("1-100 之和 = %d\n",sum);
    }

// 张三+25080808
// 编号5：1-100 之间偶数和奇数之和（while 循环，实践4第2题）
void task5_even_odd(void)
    {
        int even_sum=0;
        int odd_sum =0;
        int i       =1;
        while(i<=100)
            {
                if(i%2==0)  // 偶数进 even_sum，否则进 odd_sum
                    {
                        even_sum=even_sum+i;
                    } else
                    {
                        odd_sum=odd_sum+i;
                    }
                i++;
            }
        printf ("偶数之和 = %d，奇数之和 = %d\n",even_sum,odd_sum);
    }

// 张三+25080808
// 编号6：1-100 之间 3 和 5 的倍数之和（do-while 循环，实践4第3题）
// both 是同时为 3 和 5 的倍数，either 是 3 或 5 的倍数
void task6_mul_3_and_5(void)
    {
        int both  =0;
        int either=0;
        int j     =1;
        do
            {
                if(j%3==0&&j%5==0)
                    {
                        both=both+j;
                    }
                if(j%3==0||j%5==0)
                    {
                        either=either+j;
                    }
                j++;
            } while(j<=100);
        printf ("3和5的公倍数之和 = %d，3或5的倍数之和 = %d\n",both,either);
    }

// 张三+25080808
// 编号7：输入三个数，输出最大值和最小值（实践3第1题、实践5第1题）
void task7_max_min_three(void)
    {
        int a,b,c;
        printf ("请输入三个整数：");
        scanf ("%d %d %d",& a,& b,& c);

        int max=a;  // 先假定 a 最大，再逐个比
        if(b>max)
            {
                max=b;
            }
        if(c>max)
            {
                max=c;
            }
        int min=a;  // 先假定 a 最小，再逐个比
        if(b<min)
            {
                min=b;
            }
        if(c<min)
            {
                min=c;
            }
        printf ("最大值 = %d，最小值 = %d\n",max,min);
    }

// 张三+25080808
// 编号8：输入成绩，折算成等级 ABCDE（实践3第2题、实践5第2题）
void task8_grade(void)
    {
        int score;
        printf ("请输入成绩(0-100)：");
        scanf ("%d",& score);

        if(score>=90)
            {
                printf ("等级：A\n");
            } else if(score>=80)
            {
                printf ("等级：B\n");
            } else if(score>=70)
            {
                printf ("等级：C\n");
            } else if(score>=60)
            {
                printf ("等级：D\n");
            } else
            {
                printf ("等级：E\n");
            }
    }

// 张三+25080808
// 编号9：输入三个数，按照升序输出（实践3第3题加分项）
void task9_sort_three(void)
    {
        int a,b,c;
        printf ("请输入三个整数：");
        scanf ("%d %d %d",& a,& b,& c);

        int t;  // 三对两两比较，反序就交换
        if(a>b)
            {
                t=a;
                a=b;
                b=t;
            }
        if(a>c)
            {
                t=a;
                a=c;
                c=t;
            }
        if(b>c)
            {
                t=b;
                b=c;
                c=t;
            }
        printf ("升序输出：%d %d %d\n",a,b,c);
    }

// 张三+25080808
// 编号10：输入 n，输出 1-n 之和、奇数和、偶数和（实践5第3题）
void task10_sum_n(void)
    {
        int n;
        printf ("请输入 n：");
        scanf ("%d",& n);

        int sum=0,odd=0,even=0;
        for(int i=1; i<=n; i++)
            {
                sum=sum+i;
                if(i%2==1)
                    {
                        odd=odd+i;
                    } else
                    {
                        even=even+i;
                    }
            }
        printf ("1-%d 之和 = %d，奇数之和 = %d，偶数之和 = %d\n",n,sum,odd,even);
    }

// 张三+25080808
// 编号11：数组 0-9 正序和逆序输出（实践5第4题）
void task11_array_0_9(void)
    {
        int arr [10]={0,1,2,3,4,5,6,7,8,9};
        printf ("正序：");
        print_array (arr,10);
        printf ("逆序：");
        for(int i=9; i>=0; i--)
            {
                printf ("%d ",arr [i]);
            }
        printf ("\n");
    }

// 张三+25080808
// 编号12：8 个元素数组的最大值、最小值、平均值（实践5第5题）
void task12_array_8(void)
    {
        int arr [8]={23,45,12,67,34,89,56,78};
        int max    =arr [0];
        int min    =arr [0];
        int sum    =0;
        for(int i=0; i<8; i++)
            {
                if(arr [i]>max)
                    {
                        max=arr [i];
                    }
                if(arr [i]<min)
                    {
                        min=arr [i];
                    }
                sum=sum+arr [i];
            }
        printf ("数组：");
        print_array (arr,8);
        printf ("最大值 = %d，最小值 = %d，平均值 = %.2f\n",max,min,(double) sum/8);
    }

// 张三+25080808
// 编号13：输入十个数，按照升序排列输出（实践5奖励题）
void task13_sort_ten(void)
    {
        int arr [10];
        printf ("请输入十个整数：");
        for(int i=0; i<10; i++)
            {
                scanf ("%d",& arr [i]);
            }
        for(int i=0; i<9; i++)
            {
                for(int j=0; j<9-i; j++)
                    {
                        if(arr [j]>arr [j+1])  // 冒泡：相邻反序就交换
                            {
                                int t    =arr [j];
                                arr [j]  =arr [j+1];
                                arr [j+1]=t;
                            }
                    }
            }
        printf ("升序：");
        print_array (arr,10);
    }

// 张三+25080808
// 编号14：九九乘法表（实践之外的新增功能）
void task14_mul_table(void)
    {
        for(int i=1; i<=9; i++)
            {
                for(int j=1; j<=i; j++)  // 第 i 行打 i 个乘法式子
                    {
                        printf ("%d*%d=%-4d",j,i,i*j);
                    }
                printf ("\n");
            }
    }

// 张三+25080808
// 一行打印整个数组
void print_array(int arr [],int len)
    {
        for(int i=0; i<len; i++)
            {
                printf ("%d ",arr [i]);
            }
        printf ("\n");
    }
