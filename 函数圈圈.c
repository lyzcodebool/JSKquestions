/*************************************************************************
	> File Name: 函数圈圈.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 01:25:25 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int fun(int x);

int main()
{
    int x;

    printf("请输入一个整数：\n");
    scanf("%d", &x);
    
    printf("fun（%d） = %d", x, fun(x));
    return 0;
}

int fun(int x)
{
    int count = 0;//统计数字位数
    int tmp = x;//保存x原始值

    while(x)
    {
        x /= 10;
        count ++;
    }

    int temp = 0;//记录圈个数
    for(int i = count-1; i >= 0; --i)
    {
        int dst = ((int)(tmp/pow(10,i)))%10;//分离出来每个数字
        if(dst == 8)
        {
            temp += 2;
        }
        if(dst == 0 || dst == 6 || dst == 9)
        {
            temp += 1;
        }
    }
    return temp;
}

