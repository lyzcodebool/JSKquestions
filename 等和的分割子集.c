/*************************************************************************
	> File Name: 等和的分割子集.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 03:13:15 PM PDT
 ************************************************************************/

#include<stdio.h>
void Ziji(int a[], int n);
/*找出n个数中和为n的所有子集，输出个数*/
int main()
{
    int n;

    printf("请输入数字个数：\n");
    scanf("%d", &n);

    int a[n];

    for(int i= 0; i < n; ++i)
    {
        a[i] = i+1;
    }

    Ziji(a, n);
    return 0;
}

void Ziji(int a[], int n)
{
    int mid = n/2, count = 0;
    for(int i = 0; i < mid; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            if(a[i] + a[j] == n)
            {
                printf("第 %d 个和为 %d 的子集：{%d, %d}\n", i+1, n, a[i], a[j]);
                count ++;
            }
        }
    }
    printf("第 %d 个和为 %d 的子集：{%d}\n",count + 1, n, n);
    printf("总共%d个！",count+1);
}
