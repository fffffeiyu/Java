	//2020.4.1�ǣ���ֹ����˫������δѧ�꣬ͷ�巨�������ɾ����Ϊѧ 

#include <stdio.h>
#include <stdlib.h>
 
	//����˫����
typedef struct Node
{
	struct Node *prior;
	struct Node *next;
}
	Node,*DLinkList;
	
	//����˫����β�巨��
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
	
	
