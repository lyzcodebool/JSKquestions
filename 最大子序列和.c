/*************************************************************************
	> File Name: 最大子序列和.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 07:53:36 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void Max(int *b, int k);
void BestLong(int a[], int len, int sum, int p, int *b, int sumtmp);

int k = 0;
int main()
{
    int n, sum = 0, *best;
    printf("请输入数组长度：\n");
    scanf("%d", &n);

    int a[n];
    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    best = (int *)malloc((n+1)*sizeof(int)); 

    BestLong(a,n,sum,0,best,-999999);
    Max(best,k);
    return 0;
}

void BestLong(int a[], int len, int sum, int p, int *b,int sumtmp)
{
    for(int i = p; i < len; ++i)
    {

        sum += a[i];
        if(sum < sumtmp)
        {  
            b[k++] = sumtmp;
            p = i+1;
            sum = 0;
            BestLong(a, len, sum, p, b, sumtmp);
        }

        sumtmp = sum;
    }
            if(sum >= sumtmp)
            b[k++] = sum;
}

void Max(int *b, int k)
{
 /*   for(int j = 0; j < k; ++j)
    {
        printf("%d\n", b[j]);
    }*/
    int max = b[0];
    for(int i = 0; i < k; ++i)
    {
        if(b[i] >= max)
        {
            max = b[i];
        }
    }
    printf("最大子序列和为： %d\n", max);
}
