#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
// ����ĳ�ʼ�� 
void SListInit(SList* pl)
{
	assert(pl);
	pl->_pHead = NULL;

}

//����һ�����
pNode BuyListNode(SDataType data)
{
	pNode pNewNode = (Node*)malloc(sizeof(Node));
	if (pNewNode == NULL)
	{
		assert(0);
		return NULL;
	}
	pNewNode->_data = data;
	pNewNode->_pNext = NULL;
}

// β�巨
void SListPushBack(SList* pl, SDataType data)
{
	//1.����Ϊ��
	if (pl->_pHead == NULL)
	{
		pl->_pHead = BuyListNode(data);
	}
	//2.ֻ��һ�����
	else if (pl->_pHead->_pNext == NULL)
	{
		pl->_pHead->_pNext = BuyListNode(data);
	}
	//3.�ж�����
	else
	{
		pNode cur = pl->_pHead;
		while (cur->_pNext!=NULL)
		{
			cur = cur->_pNext;
		}
		cur->_pNext = BuyListNode(data);
	}
}

// βɾ��
void SListPopBack(SList* pl)
{
	assert(pl);
	if (NULL == pl->_pHead)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	//ֻ��һ�����
	else if (pl->_pHead->_pNext==NULL)
	{
		free(pl->_pHead->_pNext);
		pl->_pHead = NULL;
	}
	//�ж�����
	else
	{
		pNode cur = pl->_pHead;
		pNode pre = NULL;
		while (cur->_pNext)
		{
			pre = cur;
			cur = cur->_pNext;
		}
		free(cur);
		cur = NULL;
		pre->_pNext = NULL;
	}
}

// ͷ�巨
void SListPushFront(SList* pl, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		pl->_pHead= BuyListNode(data);
	}
	else 
	{
		pNode cur = BuyListNode(data);
		cur->_pNext = pl->_pHead;
		pl->_pHead = cur;

	}
}

// ͷɾ��
void SListPopFront(SList* pl)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else if (pl->_pHead->_pNext==NULL)
	{
		pl->_pHead = NULL;
	}
	else
	{
		pNode cur = pl->_pHead;
			pl->_pHead = cur->_pNext;
			free(cur);
	}
}

// ������posλ�ú������Ϊdata�Ľڵ� 
void SListInsertAfter(SList* pl, Node* pos, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL || pos == NULL)
	{
		printf("�Ƿ����룡");
		return NULL;
	}
	if (pl->_pHead == pos)
	{
		pNode pCur = BuyListNode(data);
		pCur->_pNext = pl->_pHead;
		pl->_pHead = pCur;
	}
	else
	{
		pNode pCur = pl->_pHead;
		pNode pPre = NULL;
		while (pCur != pos && pCur)
		{
			pPre = pCur;
			pCur = pCur->_pNext;
		}
		if (pCur)
		{
			pNode pNew = BuyListNode(data);
			pNew->_pNext = pCur;
			pPre->_pNext = pNew;
		}
	}

}

// ɾ��������ֵΪdata�Ľڵ� 
void SListRemoveAll(SList* pl, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
	{
		pNode tmp = pl->_pHead;
		while (tmp->_data!= data)
		{
			tmp = tmp->_pNext;
		}
		free(tmp);
	}
}

// �������в���ֵΪdata�Ľڵ㣬�ҵ����ظýڵ�ĵ�ַ�����򷵻ؿ� 
Node* SListFind(SList* pl, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
	{
		pNode tmp = pl->_pHead;
		while (tmp)
		{
			tmp = tmp->_pNext;
		}
		return tmp;
	}
}

// �������� 
void SListDestroy(SList* pl)
{
	pNode tmp = NULL;
	assert(pl);
	while (pl->_pHead)
	{
		tmp = pl->_pHead;
		pl->_pHead = pl->_pHead->_pNext;
		free(tmp);
	}

}

// ��ȡ��������Ч�ڵ�ĸ��� 
int SListSize(SList* pl)
{
	assert(pl);
	if (NULL == pl->_pHead)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
	{
		int count = 0;
		pNode tmp = pl->_pHead;
		while (tmp)
		{
			tmp = tmp->_pNext;
			count++;
		}
		return count;
	}
	
}

// ��������Ƿ�Ϊ�� 
int SListEmpty(SList* pl)
{
	if (pl->_pHead == NULL)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
	{
		return 0;
	}
	//return pl->_pHead?1:0;
}
// ��ȡ����ĵ�һ���ڵ� 
Node* SListFront(SList* pl)
{
	if (pl->_pHead == NULL)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
		return pl->_pHead->_pNext;
}

// ��ȡ����ĵڶ����ڵ� 
Node* SListBack(SList* pl)
{
	if (pl->_pHead == NULL)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
	{
		return pl->_pHead->_pNext->_pNext;
	}
}

//ɾ��������λ��ΪPOS�Ľ��
void SListErase(SList* pl, Node* pos)
{
	assert(pl);
	if (NULL == pl->_pHead)
	{
		printf("����Ϊ�գ�");
		return NULL;
	}
	else
	{
		pNode tmp = pl->_pHead;
		while (tmp != pos)
		{
			tmp = tmp->_pNext;
		}
		free(tmp);
		
	}
}
// 
//void SListRemoveAll(SList* pl, SDataType data)
//{
//	assert(pl);
//	if (pl->_pHead == NULL)
//	{
//		printf("����Ϊ�գ�");
//		return NULL;
//	}
//	else
//	{
//		int count = 0;
//		pNode tmp = pl->_pHead;
//		pNode pre = NULL;
//		while (tmp)
//		{
//			if (tmp->_data!= data)
//			{
//				tmp = tmp->_pNext;
//			}
//			else
//			{
//			
//				count++;
//				tmp = tmp->_pNext;
//			
//			}
//		}
//
//	}
//}

//��ӡ����
void PrintSList(SList *pl)
{
	pNode tail = pl->_pHead;
	while (tail)
	{
		printf("%d->", tail->_data);
		tail = tail->_pNext;
	}
	printf("NULL");
	printf("\n");
}
