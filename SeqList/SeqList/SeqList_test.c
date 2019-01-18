#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//˳���ĳ�ʼ��
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

//˳��������
void SeqDestroy(pSeqList ps)
{
	assert(ps);
	if (ps->array)
		free(ps->array);
	ps->array = NULL;
	ps->capacity = 0;
	ps->size = 0;
}
//ͷ�巨
void SeqPushFront(pSeqList ps, DataType x)
{
	assert(ps);
	//�ж�˳����Ƿ�Ϊ��
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

//β�巨
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
//ͷɾ��
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
//βɾ��
void SeqPopBack(pSeqList ps)
{
	assert(ps);
	if (0 == ps->size)
	{
		printf("û�����ݣ�");
	}
	ps->size--;
}

//ָ��λ�ò���Ԫ��
void SeqInsert(pSeqList ps, size_t pos, DataType x)
{
	//�жϲ���λ���Ƿ�Ϸ�
	assert(ps);
	assert(pos <= ps->size);
	/*if (pos < 0 || pos>ps->size - 1)
	{
		printf("����λ�÷Ƿ���");
	}*/
	//�������
	int i=0;
	for (i = ps->size - 1; i >= pos; i--)
	{
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[pos] = x;
	ps->size++;
}
//ָ��λ��ɾ��Ԫ��
int SeqErase(pSeqList ps, size_t pos)
{
	//assert(ps);
	//assert(pos <= ps->size);
	if ( pos < 0|| pos>ps->size)
	{
		printf("ɾ��λ�÷Ƿ���");
	}
	int i = 0;
	while (pos <= ps->size)
	{
		ps->array[pos] = ps->array[pos + 1];
		pos++;
	}
	ps->size--;
}
//�ж�����
void SeqCheckFULL(pSeqList ps)
{
	DataType *tmp = (DataType *)malloc(sizeof(DataType)*ps->capacity * 2);
	ps->capacity *= 2;
	ps->array = tmp;
	return ps;
}

//����Ԫ��
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
//��ӡ˳���
void SeqPrint(pSeqList ps)
{
	if (0 == ps->size)
	{
		printf("��Ϊ�գ�");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->size - 1; i++)
	{
		printf("%d", ps->array[i]);
	}
	printf("\n");
}

// ���data�ͷ���˳����� 
int SeqFind(pSeqList ps, DataType x);
{

}
// �Ƴ�˳����е�һ��ֵΪdata��Ԫ�� 
void SeqRemove(pSeqList ps, DataType x);
{
	if (0 == ps->size)
	{
		printf("��Ϊ�գ�");
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
// �Ƴ�˳���������ֵΪdata��Ԫ�� 
void SeqRemoveAll(pSeqList ps, DataType x);

// ��ȡ˳�����ЧԪ�ظ��� 
int SeqSize(pSeqList ps);

// ��ȡ˳�������� 
int SeqCapacity(pSeqList ps);

// ���˳����Ƿ�Ϊ�� 
int SeqEmpty(pSeqList ps);

// ��ȡ˳����е�һ��Ԫ�� 
DataType SeqFront(pSeqList ps);

// ��ȡ˳��������һ��Ԫ�� 
DataType SeqBack(pSeqList ps);
////////////////////////////////////// 
// 