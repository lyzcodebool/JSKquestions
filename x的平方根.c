/*************************************************************************
	> File Name: x的平方根.c
	> Author: 
	> Mail: 
	> Created Time: Sat 29 Apr 2017 12:38:02 PM PDT
 ************************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#define MAX_LEN 1000
#define MAXSIZE 10000
int main()
{
    FILE *fp;
    char buf[MAX_LEN];
    char *a[MAXSIZE];
    int i = 0, len = 0;
    if(!(fp = fopen("/home/lyzgit/JSKquestions/testcount","r")))
    {
        printf("读取失败！");
    }

    while((fgets(buf,MAX_LEN,fp)))
    {
        len = strlen(buf);
        a[i] = (char*)malloc(len+1);
        if(!a)
        {
            break;
        }
        strcpy(a[i++], buf);   
    }

    fclose(fp);
    i--;

    for(int j = 0; j < i; j++)
    {
        printf("原来的数字为：%s  开方后：%lf\n",a[j], sqrt(atoi(a[j])));
    }
    return 0;
}
