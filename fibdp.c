/*************************************************************************
	> File Name: fibdp.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Apr 2017 04:38:15 AM PDT
 ************************************************************************/

#include<stdio.h>
//动态编程思想. 备忘录；
//斐波纳切
#define M 100
#define INIT -1
int lookup[M];
int fib(int n);
int main()
{
    int n;

    printf("请输入一个整数：\n");
    scanf("%d", &n);
    
    printf("对应的fib数字为%d\n", fib(n));
    return 0;
}

void Initlookup()
{
    for(int i = 0; i < M; ++i)
    {
        lookup[i] = INIT;
    }
}

int fib(int n)
{
    if(lookup[n] = INIT)
    {
        if(n <= 1)
        {
            return n;
        }
        else
        {
            lookup[n] = fib(n-1) + fib(n - 2);
        }
    }
    return lookup[n];
}
