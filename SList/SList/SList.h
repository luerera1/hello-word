#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<stdlib.h>
//不带头节点的单链表 
typedef int SDataType;

// 节点结构 
typedef struct SListNode
{
	SDataType _data;
	struct SListNode* _pNext;
}Node,*pNode;


// 给一个链表结构 
typedef struct SList
{
	Node* _pHead;
}SList;

//c初始化
void SListInit(SList* pl);
//尾插法
void SListPushBack(SList* pl, SDataType data);
//创建一个结点
pNode BuyListNode(SDataType data);
//尾删法 
void SListPopBack(SList* pl);
//头插法
void SListPushFront(SList* pl, SDataType data);
// 头删法
void SListPopFront(SList* pl);
// 在链表pos位置后插入置为data的节点 
void SListInsertAfter(Node* pos, SDataType data);
// 删除链表中值为data的节点 
void SListRemoveAll(SList* pl, SDataType data);
// 在链表中查找值为data的节点，找到返回该节点的地址，否则返回空 
Node* SListFind(SList* pl, SDataType data);
// 销毁链表 
void SListDestroy(SList* pl);
// 获取链表中有效节点的个数 
int SListSize(SList* pl);
// 检测链表是否为空 
int SListEmpty(SList* pl);
// 获取链表的第一个节点 
Node* SListFront(SList* pl);
// 获取链表的第二个节点 
Node* SListBack(SList* pl);
//打印链表
void PrintSList(SList *pl);
//删除链表中位置为POS的结点
void SListErase(SList* pl, Node* pos);



