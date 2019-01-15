#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	pc->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
}
void DestroyContact(pContact pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void* check_capacity(pContact pc)
{
	assert(pc);
	if (pc->sz == pc->capacity)//�ж��Ƿ�����
	{
		PeoInfo *tmp = realloc(pc->data, (pc->capacity + 2)*sizeof(PeoInfo));
		if (tmp != NULL)
		{
			pc->data = tmp;
			pc->capacity += 2;
			printf("���ݳɹ�\n");
			return pc->data;
		}
		else
		{
			return NULL;
		}
	}
}


void AddContact(pContact pc)
{
	assert(pc);
	if (check_capacity(pc) == NULL)
	{
		return;
	}

	//�����Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	//...
	pc->sz++;
}
//��ʾ��Ϣ
void ShowContact(pContact pc)
{
	assert(pc);
	int i = 0;
	printf("%10s\t%4s\t%5s\t%12s\t%20s\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindEntry(pContact pc, char name[])
{
	int i = 0;
	assert(pc);
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//û�ҵ�
}

void DelContact(pContact pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int i = 0;
	int j = 0;
	int pos = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	//1.����
	printf("������Ҫɾ���˵�����>:");
	scanf("%s", name);
	pos = FindEntry(pc, name);
	//2.ɾ��
	if (pos != -1)
	{
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("Ҫɾ�����˲�����\n");
	}
}

void SearchContact(pContact pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ���ҵ�����>:");
	scanf("%s", name);
	pos = FindEntry(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%10s\t%4s\t%5s\t%12s\t%20s\n", "name", "age", "sex", "tele", "addr");
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}
void ModifyContact(pContact pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������Ҫ�޸��˵�����>:");
	scanf("%s", name);
	pos = FindEntry(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{

		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
	}
}
void SortContact(pContact pc)
{
	assert(pc);
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz; i++)
	{
		int flag = 0;
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

void EmptyContact(pContact pc)
{
	pc->sz = 0;
	printf("ͨѶ¼�����\n");
}
