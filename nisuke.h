/*************************************************************************
	> File Name: nisuke.h
	> Author: 
	> Mail: 
	> Created Time: Fri 07 Apr 2017 03:33:15 AM PDT
 ************************************************************************/

#ifndef _NISUKE_H
#define _NISUKE_H
#define M 20
typedef struct
{
    int x, y, z;
    char name[M];
}Stu;
void Compare(Stu a[M][15],int n);
void WriteRead();
#endif
