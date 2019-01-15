#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	//memset(pc->data, 0, sizeof(pc->data));��̬�汾
	pc->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
}

//��ӳ�Ա
void AddContact(pContact pc)
{
	assert(pc);
	//��̬�汾 �Ķ���
	/*if (pc->sz == MAX)
	{
		printf("���ź���ͨѶ¼����");
		return;
	}*/

	//��̬�汾
	if (check_Contact(pc) == NULL)
	{
		return;
	}
	//���
	printf("���������֣�>");
	scanf("%s", pc->data[pc->sz].name);
	printf("���������䣺>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("�������ַ��>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("������绰��>");
	scanf("%s", pc->data[pc->sz].tele);
	pc->sz++;
	printf("��ӳɹ�");

}

//��ʾ��Ա
void ShowContact(pContact pc)
{
	assert(pc);
	int i = 0;
	printf("%12s\t%6s\t%5s\t%8s\t%10s\n", "name", "age", "sex", "addr", "tele");
	for (i = 0; i < pc->sz ; i++)
	{
		printf(" %10s\t %4d\t %4s\t %7s\t %7s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].addr,
			pc->data[i].tele);
	}
}

//�Ķ���
void DestroyContact(pContact pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}
//�Ķ���
void* check_Contact(pContact pc)
{
	assert(pc);
	if (pc->sz >= pc->capacity)
	{
		PeoInfo* tmp = realloc((pc->capacity += 2)*sizeof(PeoInfo);
		if (tmp != NULL)
		{
			pc->data = tmp;
			printf("���ݳɹ���");
			return pc->data;
		}
		else
		{
			printf("NULL");
		}
	}
}
int FindEmpty(pContact pc,char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ����Ա
void DelContact(pContact pc)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	int i = 0;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	printf("��������Ҫɾ�����˵����֣�>");
	scanf("%s", name);
	pos = FindEmpty(pc,name);
	if (pos != 1)
	{
		for (i = pos; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ���");
	}
	else
	{
		printf("��Ҫɾ�������ֲ�����\n");
	}
}

//void SaveConct(Contact *pc)
//{
//	FILE* pf=
//}


void SearchContact(pContact pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	printf("������������>");
	scanf("%s", name);
	pos = FindEmpty(pc,name);
	if (pos== -1)
	{
		printf("��Ҫ���ҵ����ֲ�����");
	}
	else
	{
		printf("%10s\t%4s\t%5s\t%12s\t%20s\n", "name", "age", "sex", "tele", "addr");
		printf("%10s\t%4d\t%5s\t%12s\t%20s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].addr,
			pc->data[pos].addr);

	}
}

void SortContact(pContact pc)
{
	int i = 0, j = 0;
	int tmp = 0;
	for (i = 0; i < pc->sz - 1; i++)
	{
		int flag = 0;
		for (j = 0; j < pc->sz - i - 1; i++)
		{
			PeoInfo tmp = pc->data[j];
			pc->data[j] = pc->data[j + 1];
			pc->data[j + 1] = tmp;
			int flag = 1;
		}
		if (flag == 0)
		{
			break;
		}
	}
}
//�޸ĳ�Ա
void ModifyContact(pContact pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	int i = 0;
	printf("������Ҫ�޸ĵ��˵����֣�>");
	scanf("%s", name);
	pos = FindEmpty(pc, name);
	if (pos!= -1)
	{
		printf("������>\n");
		scanf("%s", pc->data[pos].name);
		printf("���䣺>\n");
		scanf("%d", &pc->data[pos].age);
		printf("�Ա�>\n");
		scanf("%s", pc->data[pos].sex);
		printf("��ַ��>\n");
		scanf("%s", pc->data[pos].addr);
		printf("�绰��>\n");
		scanf("%s", pc->data[pos].tele);

	}
	else
	{
		printf("û�иó�Ա��");
	}
}
void EmptyContact(pContact pc)
{
	pc->sz = 0;
	printf("ͨѶ¼�Ѿ����");
}