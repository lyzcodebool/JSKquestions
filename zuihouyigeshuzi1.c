/*************************************************************************
	> File Name: zuihouyigeshuzi1.c
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 08:50:16 PM PDT
 ************************************************************************/

#include<stdio.h>
int SelectOnce(int a[], int len);

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
    for(int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    //int a[6] = {1,2,3,1,2,2};
 //   printf("%d ", SelectOnce(a,n));
    SelectOnce(a,n);
}

int SelectOnce(int a[], int len)
{
    int m = 0, p = 0;
    for(int i = 0; i < len; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(a[i] == a[j])
            {
                break;
            }
        }
        for(int k = i+1; k < len; ++k)
        {
            if(a[i] == a[k])
            {
                break;
            }
        }
        printf("%d", a[i]);
        break;
    }
    //return m;
}
