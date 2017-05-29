/*************************************************************************
	> File Name: 最长增长次序.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Apr 2017 05:45:42 AM PDT
 ************************************************************************/

#include<stdio.h>
#define M 100
//动态规划解最长增长次序
int Longest(int a[], int len, int sum_lenth);
int lookup[M];
int current_lenth = 1;//开始的条件，初始为1，相当于初始化
int sum_lenth = 1;

int main()
{
    int n;

    printf("请输入长度：\n");
    scanf("%d", &n);

    int a[n];

    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    printf("最长增序列：%d\n", Longest(a, n, sum_lenth));
    return 0;
}

int Longest(int a[], int n, int sum_lenth)
{
    //int a[] = {10, 22, 9, 33, 21, 50}
    if(n == 1)
    {
        return 1;
    }
    for(int i = 0; i < n-1; ++i)
    {
        if(a[i] < a[n-1])
        {
            current_lenth += 1;       
        }
        sum_lenth += 1;
        Longest(a,i,sum_lenth);
           }
    return current_lenth;
}


