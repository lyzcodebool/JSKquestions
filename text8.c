/*************************************************************************
	> File Name: text8.c
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 05:21:15 PM PDT
 ************************************************************************/

#include<stdio.h>
/*#define M 100
int main()//计蒜课11t
{
    int a[M];
   // int len = sizeof(a)/sizeof(int);
    int m, len;
    printf("请输入数组长度：\n");
    scanf("%d",&len);
    printf("按升序输入数字：\n");
    for(int i = 0; i < len; ++i)
    {
        scanf("%d",&a[i]);
    }
    int count = len;
    for(int j = 0; j < len; ++j)
    {
        
        if(a[j] == a[j+1])
        {
            count--;
        }
    } 
    printf("%d",count);
}*/

#define M 100//元素移除问题
void DeteSelect(int a[],int len)
{
    int count = 0;
    for(int i = 0; i < len; ++i)
     {
        do
         {
            if(a[i] == a[i+1])
            {
                count ++;
                len --;
                i++;
            }
        a[i] = a[i + count];
        }
    }
    for(int i = 0; i < len; ++i)
    {
        printf("%d",a[i]);
    }
    
}
int main()
{
    int a[M];
    int m, len;

    printf("请输入数组长度：\n");
    scanf("%d",&len);
    
    printf("请输入数组元素：\n");
    for(int i = 0; i < len; ++i)
    {
        scanf("%d",&a[i]);
    }

    DeteSelect(a, len);
    return 0;
}
