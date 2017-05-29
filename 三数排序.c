/************************************************************************
	> File Name: 三数排序.c
	> Author: 
	> Mail: 
	> Created Time: Sun 07 May 2017 02:40:19 PM PDT
 ************************************************************************/

#include<stdio.h>

void SelectSort(int a[], int n);
//三数排序，计算交换次数
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;

    printf("请输入类别的数量：\n");
    scanf("%d", &n);
    
    int a[n];

    printf("请输入类别序列：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    
    SelectSort(a, n);
    return 0; 
}

void SelectSort(int a[], int n)
{
    int tmp = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        if(a[i] > a[j])
        {
            swap(&a[i], &a[j]);
            tmp ++;
        }
    }
    
    printf("排序后：\n");
    for(int j = 0; j < n; ++j)
    {
        printf("%d ", a[j]);
    }

    putchar(10);

    printf("交换 %d 次！", tmp);
}
