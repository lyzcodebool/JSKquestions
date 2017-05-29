/*************************************************************************
	> File Name: 最大子序列和1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 10:54:46 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
//递归
int MinJump(int a[], int l, int h);
int main()
{
    int a[5] = {3,1,1,1,1};
    printf("%d", MinJump(a, 0, 4));
    return 0;
}

int MinJump(int a[], int l, int h)
{
    if(l == h)
    {
        return 0;
    }
    if(a[l] == 0)
    {
        return INT_MAX;
    }

    int min = INT_MAX;

    for(int i = l+1; i <= h && i <= l+a[l]; ++i)
    {
        int jumps = MinJump(a, i, h);
        if(jumps != INT_MAX && jumps+1 < min)
        {
            min = jumps + 1; 
        }
    }
    return min;
}
