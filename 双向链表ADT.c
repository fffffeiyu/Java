	//2020.4.1记：截止今日双链表尚未学完，头插法与链表的删除等未学，在５号前补完相关内容

#include <stdio.h>
#include <stdlib.h>
 
	//定义双链表
typedef struct Node
{
	struct Node *prior;
	struct Node *next;
}
	Node,*DLinkList;
	
	//建立双链表（尾插法）
DLinkList DLinkListCreatT()
{
	Node *L, *p, *r;
	L = (Node *)malloc(sizeof(Node));
	L->next = NULL;
	r = L;
	r->next = NULL;
	ElemType x;
	while (scanf("%d,&x" != NULL));
	{
		p = (Node *)malloc(sizeof(Node));
   		p->data = x;
    	p->next = r->next;
    	r->next = p;
    	r = p;

	}
	r->next = NULL;
	return L;
 } 
	
	
