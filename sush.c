/*************************************************************************
	> File Name: sush.c
	> Author: 
	> Mail: 
	> Created Time: Wed 12 Apr 2017 06:14:34 PM PDT
 ************************************************************************/

#include<stdio.h>
#define Max 10000

int main()
{
    int i, j, c = 0;
    int prime[Max+1];

    for(i = 2;i < Max; ++i)
    prime[i] = 1;

    for(i = 2; i * i < Max; ++i)
    {
        if(prime[i] == 1)
        {
            for(j = 2*i; j <=Max; ++j)
            {
                if(!prime[j])
                continue;
                if(j%i == 0)
                prime[j] = 0;
            }
        }
    }

    for(i = 2; i < Max; ++i)
    {
        if(prime[i] == 1)
        {
            printf("%d ", i);
            c++;
            if(c % 10 == 0)
            printf("\n");

        }
    }

    printf("共有%d个素数！",c);
    return 0;
}
