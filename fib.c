/*************************************************************************
	> File Name: fib.c
	> Author: 
	> Mail: 
	> Created Time: Sun 30 Apr 2017 04:29:20 AM PDT
 ************************************************************************/

#include<stdio.h>
int fib(int n);
int main()
{
    int n;

    printf("请输入一个数：\n");
    scanf("%d", &n);

    printf("这个数字的fib数字为：\n");
    printf("%d\n", fib(n));
    return 0;
}

int fib(int n)
{
    if(n <= 1)
    {
        return n;
    }
 
    else
    {
        return fib(n-1) + fib(n -2);
    }
}
