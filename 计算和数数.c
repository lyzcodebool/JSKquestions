/*************************************************************************
	> File Name: 计算和数数.c
	> Author: 
	> Mail: 
	> Created Time: Tue 02 May 2017 06:07:42 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[20];
    if(!(fp = fopen("/home/lyzgit/JSKquestions/testcount","at+, r")))
    {
        printf("打开文件失败！");
        exit(1);
    }

    printf("请输入字符串：\n");
    scanf("%s", str);

    fputs(str, fp);

    rewind(fp);

   while(fgets(str, 20, fp) != EOF)
    printf("%s", str);;

    return 0;
}

void ComputeStr(int n)
{


    
}
