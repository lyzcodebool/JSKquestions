/*************************************************************************
	> File Name: 两数之和.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 01:58:19 PM PDT
 ************************************************************************/

#include<stdio.h>
/*在数组中找到两个数字的和为给定数字*/
void AddArray(int a[], int x, int l, int r);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(array)/sizeof(int);
    int x;

    printf("请输入你想要的和：\n");
    scanf("%d", &x);

    AddArray(array, x, 0, len);
    return 0;
}

void AddArray(int a[], int x, int l, int r)
{
    for(int i = l; i < r; ++i)
    {
        for(int j = i+1; j < r; ++j)
        {
            if(a[i] + a[j] == x)
            {
                printf("array[%d] + array[%d] = %d\n",i+1,j+1,x);
            }
        }
    }
}
