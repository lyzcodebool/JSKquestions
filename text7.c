/*************************************************************************
	> File Name: text7.c
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 12:03:37 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//字符串长度
int  Dete(int a[], int x, int len)
{
    int i = 0;
    int count = 0;
    for(i = 0; i < len; ++i)
    {
        if(a[i] == x)
        count ++;
    }  return len-count;
}
int main()

{
    int m;
    int a[5];
    for(int i = 0; i < 5; ++i)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 5; ++i)
    {
        printf("%d ",a[i]);
    }
    printf("请输入你想删除的元素:\n");
    
    scanf("%d",&m);
    int len =  Dete(a, m, 5);   

    printf("删除后的数组长度: %d",len); 

}
