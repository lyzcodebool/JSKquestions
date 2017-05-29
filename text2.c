/*************************************************************************
	> File Name: text2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 06:04:28 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    
    printf("请输入一个整数：\n");
    scanf("%d",&n);

    int k = (int)sqrt(n);
    int i = 2;

    while(i <= k)
    {
        if(n%i ==0)
        {
            printf("no!");
            break;
        }
        i++;
    }
    if(i > k)
    printf("yes!");
}
