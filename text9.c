/*************************************************************************
	> File Name: text9.c
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 06:22:03 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i; 
    int *arr;
    int arrlen;

    printf("请输入数组长度：\n");
    scanf("%d",&arrlen);

    arr = (int *)malloc(sizeof(int)*arrlen);

    for(int i = 0; i < arrlen; ++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < arrlen; ++i)
    {
        printf("%d",arr[i]);
    }
}
