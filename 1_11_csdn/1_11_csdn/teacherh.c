//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "Contact.h"
//
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	//memset(pc->data, 0, sizeof(pc->data));
//	pc->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
//	if (pc->data == NULL)
//	{
//		perror("InitContact::malloc()");
//		exit(EXIT_FAILURE);
//	}
//	pc->capacity = 3;
//	//�����ļ��еı�����Ϣ
//	LoadContact(pc);
//}
//
//void DestroyContact(Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	pc->capacity = 0;
//	free(pc->data);
//	pc->data = NULL;
//}
//
//int CheckCapacity(Contact* pc)
//{
//	assert(pc);
//	if (pc->capacity == pc->sz)
//	{
//		//����
//		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, (pc->capacity + 2)*sizeof(PeoInfo));
//		if (ptr != NULL)
//		{
//			pc->data = ptr;
//			pc->capacity += 2;
//			printf("���ݳɹ�\n");
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void AddContact(Contact* pc)
//{
//	assert(pc);
//
//	/*if(pc->sz == MAX)
//	{
//	printf("���ź���ͨѶ¼�������޷����\n");
//	return;
//	}*/
//	if (CheckCapacity(pc) == 0)
//	{
//		printf("����ʧ�ܣ��޷����\n");
//		return;
//	}
//	//���
//	printf("����������:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("����������:>");
//	scanf("%d", &(pc->data[pc->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", &(pc->data[pc->sz].sex));
//	printf("�������ַ:>");
//	scanf("%s", &(pc->data[pc->sz].addr));
//	printf("������绰:>");
//	scanf("%s", &(pc->data[pc->sz].tele));
//	pc->sz++;
//
//	printf("��ӳɹ�\n");
//}
//
//void ShowContact(Contact* pc)
//{
//	int i = 0;
//	assert(pc);
//	//����    ����    �绰   �Ա�    ��ַ
//	//zhangsan 20     123    ��      ����
//	printf("%10s\t%5s\t%5s\t%15s\t%12s\n", "����", "����", "�Ա�", "��ַ", "�绰");
//	for (i = 0; i<pc->sz; i++)
//	{
//		printf("%10s\t%5d\t%5s\t%15s\t%12s\n",
//			pc->data[i].name,
//			pc->data[i].age,
//			pc->data[i].sex,
//			pc->data[i].addr,
//			pc->data[i].tele);
//	}
//}
//
//
//int FindByName(Contact* pc)
//{
//	char name[NAME_MAX] = { 0 };
//	int i = 0;
//	printf("����������:>");
//	scanf("%s", name);
//	for (i = 0; i<pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//void DelContact(Contact* pc)
//{
//	int pos = 0;
//	int i = 0;
//	if (pc->sz == 0)
//	{
//		printf("���ź���û��ɾ\n");
//		return;
//	}
//	//��
//	pos = FindByName(pc);
//	if (pos == -1)
//	{
//		printf("Ҫɾ�����˲�����\n");
//		return;
//	}
//	//ɾ
//	for (i = pos; i<pc->sz - 1; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->sz--;
//	printf("ɾ���ɹ�\n");
//}
//
//void SaveContact(Contact* pc)
//{
//	FILE* pf = fopen("contact.dat", "wb");
//	int i = 0;
//	if (pf == NULL)
//	{
//		perror("SaveContact::fopen");
//		return;
//	}
//	//д����
//	for (i = 0; i<pc->sz; i++)
//	{
//		fwrite(&(pc->data[i]), sizeof(PeoInfo), 1, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//}
//
//void LoadContact(Contact* pc)
//{
//	FILE* pf = fopen("contact.dat", "rb");
//	PeoInfo tmp = { 0 };
//	if (pf == NULL)
//	{
//		perror("LoadContact::fopen");
//		return;
//	}
//	//���ļ�
//	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
//	{
//		//����ȡ����Ԫ�ط���ͨѶ¼��
//		CheckCapacity(pc);
//		pc->data[pc->sz] = tmp;
//		pc->sz++;
//	}
//	fclose(pf);
//	pf = NULL;
//}
