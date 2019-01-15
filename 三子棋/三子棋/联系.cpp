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
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input)
		return 0;
}