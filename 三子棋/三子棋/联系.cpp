#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void game()
{

}
void menu()
{
	printf("**********************************");
	printf("*******  1.    PLAY      *********");
	printf("*******  2.    EXIT      *********");
	printf("**********************************");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input)
		return 0;
}