/*************************************************************************
	> File Name: LONNGest.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Apr 2017 07:08:05 AM PDT
 ************************************************************************/

#include<stdio.h>
#define M 100
//建表
int LONNGest(int a[], int n, int lookup[]);
int main()
{
    int a[] = {10, 22, 9, 33, 21, 50};
    int len = sizeof(a) / sizeof(int);
    
    int lookup[M];
    printf("最长增序列长度：\n%d\n", LONNGest(a,len,lookup));

}


int LONNGest(int a[], int n, int lookup[])
{
    int max = 0;
    //int a[] = {10, 22, 9, 33, 21, 50};
    if(n == 1)
    {
        return 1;
    }
    for(int i = 0; i < M; ++i)
    {
        lookup[i] = 1;
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(a[j] < a[i] && lookup[i] < lookup[j] + 1)
            {
                lookup[i] = lookup[j] + 1;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        if(max < lookup[i])
        {
            max = lookup[i];
        }
    }
    return max;
}
