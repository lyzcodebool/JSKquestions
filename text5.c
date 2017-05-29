/*************************************************************************
	> File Name: text5.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2017 09:05:10 PM PDT
 ************************************************************************/

#include<stdio.h>
#include"nisuke.h"

void WriteRead()
{
    Stu a[M][15];
    int i = 0, n, m, l;
    do
    { 
        i++;

        printf("请输入这个班有几个学生：\n");
        scanf("%d", &n);

        if(n != -1)
        {

            for(int j = 1; j <= n; ++j)
            {
                printf("请输入第%d个学生泥块的长宽高和姓名：",j);
                scanf("%d %d %d %s",&a[i][j].x, &a[i][j].y, &a[i][j].z, &a[i][j].name[j]);
                printf("%d %d %d %s",a[i][j].x, a[i][j].y, a[i][j].z, &a[i][j].name[j]);
                printf("\n");
            }
        }
    }while(n != -1);
    Compare(a,i);
}

void Compare(Stu a[M][15], int n)
{
    int max, min;
    int p, q;//用来存储j值
    int j = 1;
    for(int i = 1; i < n; ++i)
    {
        max = min = a[i][j].x*a[i][j].y*a[i][j].z;
        for(int j = 1; a[i][j].x > 0; ++j)
        {
            if(a[i][j].x*a[i][j].y*a[i][j].z < min)
            {
                min = a[i][j].x*a[i][j].y*a[i][j].z;
                p = j;
            }
            if(a[i][j].x*a[i][j].y*a[i][j].z > max)
            {
                max =  a[i][j].x*a[i][j].y*a[i][j].z;
                q = j;
            }
        }
        printf("%s took clay from %s\n",&a[i][q].name[q],&a[i][p].name[p]);
    }
}

int main()
{
    WriteRead();
}
