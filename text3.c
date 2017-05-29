/*************************************************************************
	> File Name: text3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 06:25:47 PM PDT
 ************************************************************************/

#include<stdio.h>//斐波那挈函数
int main()
{
    int n;

    printf("请输入你想查看的号码\n");
    scanf("%d",&n);
    int sum = 1;
    int sum2 = 1;
    int sum1 = 1;
    for(int i = 1; i < n; ++i)
    {
        if(1==n || 2==n)
        {
            printf("%d",sum1);
           // sum = sum1;
        }
        else
        {
            printf("%d",sum);
            sum1 = sum;
            sum = sum1 + sum2;
            sum2 = sum1;//
        }       
    }
return 0;
}
