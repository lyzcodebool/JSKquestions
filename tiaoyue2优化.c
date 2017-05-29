/*************************************************************************
	> File Name: tiaoyue2优化.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 07:09:12 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define M 100
#define N 999999
int BestJumpcount(int a[], int len, int *dp);
int main()
{
    int n;
    int dp[M];
    printf("请输入元素个数：\n");
    scanf("%d", &n);

    int a[n];
    printf("请输入元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    printf("最少跳跃%d次！\n", BestJumpcount(a,n,dp));
    return 0;
}

int BestJumpcount(int a[], int len, int dp[])
{
    int min;
    if(len <= 1)
    {
        return 1;
    }
//int a[] = {3, 1, 1, 1, 1};
    dp[0] = 0;
    for(int i = 1; i < M; ++i)
    {
        dp[i] = N;
    }

    for(int i = 1; i < len; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(j + a[j] >= i )
            {
                if(dp[i] > dp[j] + 1)
                dp[i] = dp[j] + 1;      
            }
        }
    }
     return dp[len-1];
}
