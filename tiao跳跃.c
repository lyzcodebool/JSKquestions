/*************************************************************************
	> File Name: tiao跳跃.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 02:33:28 PM PDT
 ************************************************************************/

#include<stdio.h>

int Jumparr(int a[], int len, int tmp);
int main()
{
    int n;
    printf("请输入数组长度：\n");
    scanf("%d", &n);
    int a[n];

    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);   
    }
   if (Jumparr(a,n,0) == 1)
    {
        printf("true！");
    }
    else
    {
        printf("flase！");
    }
    return 0;
}

int Jumparr(int a[], int len, int tmp)
{
    int count = a[0];
    int i = 1;
    while(i < len-1 && count < len)
    {
        count += a[count-1];  
        tmp ++;       
        i = count;
    }
    printf("跳跃了%d次！",tmp + 1);
    if(count == len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
