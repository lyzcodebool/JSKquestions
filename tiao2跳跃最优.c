/*************************************************************************
	> File Name: tiao2跳跃最优.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 03:53:17 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX  99999

int min(int *a, int *b);
int BestJump(int a[], int len, int *dp);
//动态规划 跳跃二
int main()
{
    int n;
    int *dp;

    printf("请输入元素个数：\n");
    scanf("%d", &n);

    int a[n];
    printf("请输入元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    printf("跳跃了%d次！", BestJump(a,n,dp));
    return 0;
}

int BestJump(int a[], int len, int *dp)
{
    if(len <= 1)
    {
        return 0;
    }
    dp = (int *)malloc((len+1)*sizeof(int));
    
    dp[0] = 0;
    for(int i = 1; i < len; ++i)
    {
        dp[i] = MAX;
    }

    for(int i = 1; i < len; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(a[j] + j >= i)
            {
                if(dp[j] + 1 < dp[i])
                dp[i] = dp[j] + 1;
               // dp[i] = min(&dp[i], &dp[j]+1);
                break;
            }
        }
    }
    return dp[len -1];
}

int  min(int *a, int *b)
{
    return ((*a)<(*b)?(*a):(*b));
}
