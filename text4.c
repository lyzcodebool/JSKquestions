/*************************************************************************
	> File Name: text4.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 07:35:34 PM PDT
 ************************************************************************/

#include<stdio.h>

void TransRL(int m, int n, int a[m][n])
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = n; j > 0; j--)
        {
             printf("%d ",a[i][j-1]);  
        }
        printf("\n");
    }
}
void TransOD(int m, int n, int a[m][n])
{
    for(int i = m; i > 0; i--)
    {
        for(int j = 0; j < n; ++j)
        {
            printf("%d ",a[i-1][j]);
        }
        printf("\n");
    }
}

void Select(int m ,int n, int a[m][n])
{
    int t;

    printf("请输入你想进行的操作：\n0---上下翻转\n1---左右翻转\n");
    scanf("%d",&t);

    switch(t)
    {
        case 0:
        TransOD(m,n,a);
        break;
        case 1:
        TransRL(m,n,a);
        break;
    }
}

int main()
{
    int m , n;

    printf("请输入矩阵的行和列：\n");
    scanf("%d %d",&m,&n);
    
    int a[m][n];

    for(int i = 0; i <m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            a[i][j] = j+1;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    Select(m,n,a);
    return 0;
}
