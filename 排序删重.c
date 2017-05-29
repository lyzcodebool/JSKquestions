/*************************************************************************
	> File Name: 排序删重.c
	> Author: 
	> Mail: 
	> Created Time: Tue 02 May 2017 05:09:55 PM PDT
 ************************************************************************/

#include<stdio.h>
//排序后的数组删除重复数字，直到重复数字剩下两个为止
void BubbleSort(int a[], int len);
void DetetArr(int a[], int len);
int main()
{
    int n;

    printf("请输入数组长度\n");
    scanf("%d", &n);
    
    int a[n];

    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    BubbleSort(a, n);
    DetetArr(a, n);

}

void DetetArr(int a[], int len)
{
    int temp[20];

    int count = 1, k = 0; 
    for(int i = 0; i < len; ++i)
    {
        if(a[i] == a[i+1])
        {
            count ++;
            if(count >= 2 && count <3)
            {
                temp[k++] = a[i];
                temp[k++] = a[i];
            }

          /*  else(count > 4)
            {
                continue;
            }*/
        }
        else
        {
            if(a[i+1] != a[i+2])
            {
                temp[k++] = a[i+1];
            }
            count = 1;
           // continue;
        }
    }

    printf("删除后数组：\n");
    for(int j = 0; j < k - 1; ++j)
    {
        printf("%d ", temp[j]);
    }
    printf("删除后数组长度：%d\n", k - 1);
}

void BubbleSort(int a[], int len)
{
    int temp;
    for(int i = 0 ; i < len -1; ++i)
    {
        for(int j = 0; j < len - i -1; ++j)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            } 
        }
    }
}
