/*************************************************************************
	> File Name: text1.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 05:55:23 PM PDT
 ************************************************************************/

#include<stdio.h>
int main()
{
    int m ,n;
    printf("请输入两个整数M和N用空格隔开(M>=1,N<=500)\n");
    scanf("%d %d",&m,&n);
    if(0 == n%m)
    {
        printf("yes!");
    }
    else
    printf("no!");
    return 0;
}
