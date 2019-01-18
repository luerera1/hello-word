#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
#define MAXSIZE 10
#define data 5
typedef int DataType;
//¾²Ì¬
//Struct SeqList
//{
//	int array[MAXSIZE];
//	int size;
//};
//¶¯Ì¬
typedef struct SeqList
{
	DataType *array;
	int size;
	int capacity;
}SeqList,*pSeqList;

void SeqInit(pSeqList ps);
void SeqDestroy(pSeqList ps);
void SeqPushFront(pSeqList ps, DataType x);
void SeqPushBack(pSeqList ps,DataType x);
void SeqDelFront(pSeqList ps);
void SeqPopBack(pSeqList ps);
void SeqCheckFULL(pSeqList ps);
void SeqInsert(pSeqList ps, size_t pos, DataType x);
int SeqErase(pSeqList ps, size_t pos);
int SeqFind(pSeqList ps, DataType x);
void SeqPrint(pSeqList ps);
int SeqFind(pSeqList ps, DataType x);
void SeqRemove(pSeqList ps, DataType x);
void SeqRemoveAll(pSeqList ps, DataType x);
int SeqSize(pSeqList ps);
int SeqCapacity(pSeqList ps);
int SeqEmpty(pSeqList ps);
DataType SeqFront(pSeqList ps);
DataType SeqBack(pSeqList ps);



