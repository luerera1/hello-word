#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"

void menu()
{
	printf("*************************************\n");
	printf("******1.        add            ******\n");
	printf("******2.        del            ******\n");
	printf("******3.        search         ******\n");
	printf("******4.        modify         ******\n");
	printf("******5.        show           ******\n");
	printf("******6.        empty          ******\n");
	printf("******7.        sort           ******\n");
	printf("******0.        exit           ******\n");
	printf("*************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT
};

void test()
{
	int input = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD://����
			AddContact(&con);
			break;
		case DEL://ɾ��
			DelContact(&con);
			break;
		case SEARCH://����
			SearchContact(&con);
			break;
		case MODIFY://�޸�
			ModifyContact(&con);
			break;
		case SHOW://��ʾ
			ShowContact(&con);
			break;
		case SORT://����
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		case EMPTY://���
			EmptyContact(&con);
			break;
		default:
			printf("ѡ�����\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

