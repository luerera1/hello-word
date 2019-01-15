#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

void InitContact(pContact pc)
{
	assert(pc);
	pc->sz = 0;
	//memset(pc->data, 0, sizeof(pc->data));静态版本
	pc->data = (PeoInfo*)malloc(3 * sizeof(PeoInfo));
	pc->capacity = DEFAULT_SZ;
}

//添加成员
void AddContact(pContact pc)
{
	assert(pc);
	//静态版本 改动四
	/*if (pc->sz == MAX)
	{
		printf("很遗憾，通讯录已满");
		return;
	}*/

	//动态版本
	if (check_Contact(pc) == NULL)
	{
		return;
	}
	//添加
	printf("请输入名字：>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄：>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别：>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入地址：>");
	scanf("%s", pc->data[pc->sz].addr);
	printf("请输入电话：>");
	scanf("%s", pc->data[pc->sz].tele);
	pc->sz++;
	printf("添加成功");

}

//显示成员
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

//改动二
void DestroyContact(pContact pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}
//改动三
void* check_Contact(pContact pc)
{
	assert(pc);
	if (pc->sz >= pc->capacity)
	{
		PeoInfo* tmp = realloc((pc->capacity += 2)*sizeof(PeoInfo);
		if (tmp != NULL)
		{
			pc->data = tmp;
			printf("增容成功！");
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

//删除成员
void DelContact(pContact pc)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	int i = 0;
	if (pc->sz == 0)
	{
		printf("通讯录为空");
		return;
	}
	printf("请输入您要删除的人的名字：>");
	scanf("%s", name);
	pos = FindEmpty(pc,name);
	if (pos != 1)
	{
		for (i = pos; i < pc->sz - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->sz--;
		printf("删除成功！");
	}
	else
	{
		printf("您要删除的名字不存在\n");
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
	printf("请输入姓名：>");
	scanf("%s", name);
	pos = FindEmpty(pc,name);
	if (pos== -1)
	{
		printf("您要查找的名字不存在");
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
//修改成员
void ModifyContact(pContact pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	int i = 0;
	printf("请输入要修改的人的名字：>");
	scanf("%s", name);
	pos = FindEmpty(pc, name);
	if (pos!= -1)
	{
		printf("姓名：>\n");
		scanf("%s", pc->data[pos].name);
		printf("年龄：>\n");
		scanf("%d", &pc->data[pos].age);
		printf("性别：>\n");
		scanf("%s", pc->data[pos].sex);
		printf("地址：>\n");
		scanf("%s", pc->data[pos].addr);
		printf("电话：>\n");
		scanf("%s", pc->data[pos].tele);

	}
	else
	{
		printf("没有该成员！");
	}
}
void EmptyContact(pContact pc)
{
	pc->sz = 0;
	printf("通讯录已经清空");
}