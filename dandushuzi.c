/*************************************************************************
	> File Name: dandushuzi.c
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Apr 2017 08:06:44 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define N 20
//单独数字
typedef struct node
{
    int data;
    struct node *next;
}Lnode;

//创建单链表
void CreatLink(Lnode *head, int a[], int n)
{
    Lnode *p;

    head = (Lnode*)malloc(sizeof(Lnode));
    head -> next = NULL;

   /* printf("请输入元素个数：\n");
    scanf("%d", &n);*/

  //  printf("请输入数字：\n");
    int i = 0;
    while(i < n)
    {
        p = (Lnode*)malloc(sizeof(Lnode));
        p -> data = a[i];
        p -> next = head -> next;
        head -> next = p;
    }
}  
int Len(Lnode *head)
{
    Lnode *p  = head;
    int i = 0;
    while(p->next != 0)
    {
        p = p->next;
        i++;
    }
    return i;
}
/*int GetLink(Lnode *head, int x)
{
    //首先对要删除的元素进行查找
    Lnode *p = head -> next;
    while(p != NULL && p -> next != x)
    p = p -> next;
    
    return x;
}*/
Lnode *GetLink(Lnode *head, int n)//按位置查找
{                                         
    Lnode *p = head;
    int j = 0;
    while(p != NULL && j < n)
    {
        j++;
    }
    return p;
}

void DeteLink(Lnode *head, int x)//删除
{
    Lnode *p, *q;
    p = GetLink(head, x - 1);
    
    if(p == NULL)
    {
        printf("无法删除！");
    }

    else if(p -> next == NULL)
    {
        printf("你想删除的元素不存在！");
    }
    
    else
       {
        q = p -> next;
        p -> next = q -> next;
        free(q);
    }
}

int main()
{
    int n;
    int tmp[N];
    Lnode *H;

    printf("请输入数组长度：\n");
    scanf("%d", &n);

    int a[n];
    printf("请输入数组元素：\n");
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
       CreatLink(H, a, n);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(tmp[j] != a[i])
            {
                tmp[j] = a[i];
                break;
            }
            if(tmp[j] = a[i])
            {
                DeteLink(H,tmp[j]); 
                break;
            }
        }
    }
    int len = Len(H);
    for(int i = 0; i < len; ++i)
    {
        printf("%d",H->data);
    }
}
