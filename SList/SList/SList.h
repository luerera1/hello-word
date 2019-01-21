#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>
//����ͷ�ڵ�ĵ����� 
typedef int SDataType;

// �ڵ�ṹ 
typedef struct SListNode
{
	SDataType _data;
	struct SListNode* _pNext;
}Node,*pNode;


// ��һ������ṹ 
typedef struct SList
{
	Node* _pHead;
}SList;

//c��ʼ��
void SListInit(SList* pl);
//β�巨
void SListPushBack(SList* pl, SDataType data);
//����һ�����
pNode BuyListNode(SDataType data);
//βɾ�� 
void SListPopBack(SList* pl);
//ͷ�巨
void SListPushFront(SList* pl, SDataType data);
// ͷɾ��
void SListPopFront(SList* pl);
// ������posλ�ú������Ϊdata�Ľڵ� 
void SListInsertAfter(Node* pos, SDataType data);
// ɾ��������ֵΪdata�Ľڵ� 
void SListRemoveAll(SList* pl, SDataType data);
// �������в���ֵΪdata�Ľڵ㣬�ҵ����ظýڵ�ĵ�ַ�����򷵻ؿ� 
Node* SListFind(SList* pl, SDataType data);
// �������� 
void SListDestroy(SList* pl);
// ��ȡ��������Ч�ڵ�ĸ��� 
int SListSize(SList* pl);
// ��������Ƿ�Ϊ�� 
int SListEmpty(SList* pl);
// ��ȡ����ĵ�һ���ڵ� 
Node* SListFront(SList* pl);
// ��ȡ����ĵڶ����ڵ� 
Node* SListBack(SList* pl);
//��ӡ����
void PrintSList(SList *pl);
//ɾ��������λ��ΪPOS�Ľ��
void SListErase(SList* pl, Node* pos);



