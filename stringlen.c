/*************************************************************************
	> File Name: stringlen.c
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Apr 2017 08:59:33 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//求字符串最后一个单词长度
int main()
{
    char str[100];
    int count = 0;
    int i = 0;
    int j = 0;
    printf("请输入字符串:\n");
    /*while((str[i] = getchar()) != '\n')
    {
        //scanf("%c", &str[i]);
        i++;

    }*/
    for( i = 0; i < 100; ++i)
    {
        if(str[i] == ' ')
        break;
        if(str[i] != ' ') 
        scanf("%c",&str[i]);
    }
    // gets(str);
    /*for(j = 0; j < i; j++)
    {
        printf("%c", str[j]);
    }*/
    /*while(str[i] != '\n')
    {
        scanf("%c", &str[i]);
        i++;
    }*/
    //scanf("%s" , str);
    //printf("%s" , str);
   // puts(str);
    int len = (strlen(str)-1);

    //printf("%s", str);
    for(int j = len; j > 0; j--)
    {
        if(str[j] != ' ')
            count ++;
        //if(count > 0)
        if(str[j] == ' ')
            break;
    }
    printf("%d",count);
}
