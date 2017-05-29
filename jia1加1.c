/*************************************************************************
	> File Name: jia1加1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 03:01:23 PM PDT
 ************************************************************************/

#include<stdio.h>
void Addarr(int a[], int len, int tmp);
int main()
{
    int n;

    printf("请输入n位数字：\n");
    scanf("%d", &n);

    int a[n];

    printf("请按照数字高位到低位的顺序依次输入各个数字：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    Addarr(a,n,n);
    return 0;
}

void Addarr(int a[], int len, int tmp)
{
    if((a[len-1]+1 == 10) && (len-1)!= 0)
    {
        a[len-1] = 0;
        Addarr(a,len-1,tmp);
    }
    else
    {
        a[len-1] += 1;
        for(int i = 0; i < tmp; ++i)
        {
            printf("%d ", a[i]);
        }
    }
}
