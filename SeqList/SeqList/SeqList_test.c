#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//顺序表的初始化
void SeqInit(pSeqList ps)
{
	ps->array = (DataType*)malloc(sizeof(DataType) *3);
	if (NULL == ps->array)
	{
		assert(0);
	}
	else
	{
		ps->capacity = 3;
		ps->size = 0;
	}
}

//顺序表的销毁
void SeqDestroy(pSeqList ps)
{
	assert(ps);
	if (ps->array)
		free(ps->array);
	ps->array = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
//头插法
void SeqPushFront(pSeqList ps, DataType x)
{
	assert(ps);
	//判断顺序表是否为空
	if (0 == ps->size)
	{
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[0] = data;
	ps->size++;
}

//尾插法
void SeqPushBack(pSeqList ps,DataType x)
{
	assert(ps);
	if (0 == ps->size)
	{
		return;
	}
	int i = 0;
	for (i = ps->size - 1; i >= 0; i--)
	{
		ps->array[ps->size] = data;
	}
	ps->size++;

}
//头删法
void SeqDelFront(pSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		ps->array[i - 1] = ps->array[i];
	}
	ps->size--;

}
//尾删法
void SeqPopBack(pSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("没有数据！");
	}
	ps->size--;
}

//指定位置插入元素
void SeqInsert(pSeqList ps, size_t pos, DataType x)
{
	//判断插入位置是否合法
	assert(ps);
	assert(pos <= ps->size);
	/*if (pos < 0 || pos>ps->size - 1)
	{
		printf("插入位置非法！");
	}*/
	//检测容量
	int i=0;
	for (i = ps->size - 1; i >= pos; i--)
	{
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[pos] = x;
	ps->size++;
}
//指定位置删除元素
int SeqErase(pSeqList ps, size_t pos)
{
	//assert(ps);
	//assert(pos <= ps->size);
	if ( pos < 0|| pos>ps->size)
	{
		printf("删除位置非法！");
	}
	int i = 0;
	while (pos <= ps->size)
	{
		ps->array[pos] = ps->array[pos + 1];
		pos++;
	}
	ps->size--;
}
//判断增容
void SeqCheckFULL(pSeqList ps)
{
	DataType *tmp = (DataType *)malloc(sizeof(DataType)*ps->capacity * 2);
	ps->capacity *= 2;
	ps->array = tmp;
	return ps;
}

//查找元素
int SeqFind(pSeqList ps, DataType x)
{
	if (0 == ps->size)
	{
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == x)
		{
			return ps->array[i];
		}
	}
	return -1;
}
//打印顺序表
void SeqPrint(pSeqList ps)
{
	if (0 == ps->size)
	{
		printf("表为空！");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		printf("%d", ps->array[i]);
	}
	printf("\n");
}

// 检测data释放在顺序表中 
int SeqFind(pSeqList ps, DataType x);
{

}
// 移除顺序表中第一个值为data的元素 
void SeqRemove(pSeqList ps, DataType x);
{
	if (0 == ps->size)
	{
		printf("表为空！");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		if (x == ps->array[i]);
		{
			ps->array[i] = ps->array[i + 1];
		}
	}
}
// 移除顺序表中所有值为data的元素 
void SeqRemoveAll(pSeqList ps, DataType x);

// 获取顺序表有效元素个数 
int SeqSize(pSeqList ps);

// 获取顺序表的容量 
int SeqCapacity(pSeqList ps);

// 检测顺序表是否为空 
int SeqEmpty(pSeqList ps);

// 获取顺序表中第一个元素 
DataType SeqFront(pSeqList ps);

// 获取顺序表中最后一个元素 
DataType SeqBack(pSeqList ps);
////////////////////////////////////// 
// 