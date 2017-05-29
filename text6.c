/*************************************************************************
	> File Name: text6.c
	> Author: 
	> Mail: 
	> Created Time: Fri 07 Apr 2017 05:01:05 AM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define N 51
//奇怪的国家
/*int main()
{
    char first[N], second[N];
    printf("请按照问题次序依次输入两个人的观点:\n");
    scanf("%s%s", first, second);
    int len = strlen(first);
    for(int i = 0; i < len ; ++i)
    {
        if(first[i] == second[i])
        printf("1 ");
        else
        printf("0");
    }
    printf("\n");
    return 0;
}*/
int main()
{
    int *a, *b;
    printf("请按照问题次序依次输入两个人的观点:\n");
    scanf("%d%d",a,b);//向数组里写书组的简便方法；
    int len  = sizeof(a) / sizeof(int);
    for(int i = 0; i < len; ++i)
    {
        printf("%d",a[i]);
    }
    
}
