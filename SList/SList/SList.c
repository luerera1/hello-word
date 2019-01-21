#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
// 链表的初始化 
void SListInit(SList* pl)
{
	assert(pl);
	pl->_pHead = NULL;

}

//创建一个结点
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

// 尾插法
void SListPushBack(SList* pl, SDataType data)
{
	//1.链表为空
	if (pl->_pHead == NULL)
	{
		pl->_pHead = BuyListNode(data);
	}
	//2.只有一个结点
	else if (pl->_pHead->_pNext == NULL)
	{
		pl->_pHead->_pNext = BuyListNode(data);
	}
	//3.有多个结点
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

// 尾删法
void SListPopBack(SList* pl)
{
	assert(pl);
	if (NULL == pl->_pHead)
	{
		printf("链表为空！");
		return NULL;
	}
	//只有一个结点
	else if (pl->_pHead->_pNext==NULL)
	{
		free(pl->_pHead->_pNext);
		pl->_pHead = NULL;
	}
	//有多个结点
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

// 头插法
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

// 头删法
void SListPopFront(SList* pl)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		printf("链表为空！");
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

// 在链表pos位置后插入置为data的节点 
void SListInsertAfter(SList* pl, Node* pos, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL || pos == NULL)
	{
		printf("非法插入！");
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

// 删除链表中值为data的节点 
void SListRemoveAll(SList* pl, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		printf("链表为空！");
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

// 在链表中查找值为data的节点，找到返回该节点的地址，否则返回空 
Node* SListFind(SList* pl, SDataType data)
{
	assert(pl);
	if (pl->_pHead == NULL)
	{
		printf("链表为空！");
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

// 销毁链表 
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

// 获取链表中有效节点的个数 
int SListSize(SList* pl)
{
	assert(pl);
	if (NULL == pl->_pHead)
	{
		printf("链表为空！");
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

// 检测链表是否为空 
int SListEmpty(SList* pl)
{
	if (pl->_pHead == NULL)
	{
		printf("链表为空！");
		return NULL;
	}
	else
	{
		return 0;
	}
	//return pl->_pHead?1:0;
}
// 获取链表的第一个节点 
Node* SListFront(SList* pl)
{
	if (pl->_pHead == NULL)
	{
		printf("链表为空！");
		return NULL;
	}
	else
		return pl->_pHead->_pNext;
}

// 获取链表的第二个节点 
Node* SListBack(SList* pl)
{
	if (pl->_pHead == NULL)
	{
		printf("链表为空！");
		return NULL;
	}
	else
	{
		return pl->_pHead->_pNext->_pNext;
	}
}

//删除链表中位置为POS的结点
void SListErase(SList* pl, Node* pos)
{
	assert(pl);
	if (NULL == pl->_pHead)
	{
		printf("链表为空！");
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
//		printf("链表为空！");
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

//打印函数
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
