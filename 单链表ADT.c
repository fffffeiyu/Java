	//2020.3.30�ǣ������ҵ�޴����֣���ѧϰ�������֪ʶ 
	//2020.4.1�ǣ����������ݲ�����Ϥ���������в��ִ���ο�ͬѧ����������Դ 

#include<stdio.h>
#include<stdib.h>

struct Node
{
	int element;
	struct Node *next;

}
	typedef struct Node* List;
	
	//���ɱ�ͷ 
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

	//�ж������Ƿ�Ϊ��
int isEmpty(List L)
{
	if(L == NULL)
	{
		printf("��ͷ����Ϊ��\n");
		exit(1); 
	}
	
	return L-> next == NULL ?1:0;	//Ϊ�շ���1
 } 

	//����
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

	//�ڽڵ�p�������һ���ڵ�
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
 
 	//ɾ���ڵ�
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
	//ɾ��������������ͷ�ڵ�
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
