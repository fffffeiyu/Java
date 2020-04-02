	//2020.3.30记：面对作业无从下手，在学习链表相关知识 
	//2020.4.1记：对链表内容不够熟悉，以下仍有部分代码参考同学或者网络资源 

#include<stdio.h>
#include<stdib.h>

struct Node
{
	int element;
	struct Node *next;

}
	typedef struct Node* List;
	
	//生成表头 
List creatList(void)
{
	list L = (List)malloc(sizeof(struct Node));
	if(L== NULL)
	{
		printf("memory overflow\n");
		exit(1);
	}
	
	L-> element = 0;
	L-> next = NULL;
	
	return L;
}

	//判断链表是否为空
int isEmpty(List L)
{
	if(L == NULL)
	{
		printf("表头不能为空\n");
		exit(1); 
	}
	
	return L-> next == NULL ?1:0;	//为空返回1
 } 

	//插入
void insert_1(intx,List L);
{
	List temp = (list)malloc(sizeof(struct Node));
	if (temp==NULL)
	{
		printf("memory overflow\n");
		exit(1);
	}
	temp ->element = x;
	temp ->next =L->next;
	L->next = temp;
}

	//在节点p后插入另一个节点
void insert_2(int x,List L,struct Node *p)
{
	List temp=(List)malloc(sizeof(struct Node));
	if (temp == NULL)
	{
		printf("memory overflow\n");
		exit(1);
	}
	temp -> element =x;
	temp -> next = p -> next;
	p -> next = temp;
 } 
 
 	//删除节点
void deleteElement(int x, List L)
{
	List p = find(x,L);
	List previous;
	if(p == NULL)
	{
		printf("%d is not existed in List\n");
		return ;
		}	
		previous = findPrevious(x,L);
		previous ->next = p -> next;
		free(p);
}	
	//删除整个链表但保留头节点
{
	void deleteList(List L)
	{
		List p = L -> next;
		while(p != NULL)
		{
			List temp;
			temp = p -> next;
			free(p);
		}
		L-> next = NULL;
	}
 } 
