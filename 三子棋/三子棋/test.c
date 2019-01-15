#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("##############################\n");
	printf("#####1.    PLAY         ######\n");
	printf("#####2.    EXIT         ######\n");
	printf("##############################\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret!='C')
			break;
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);

	}
	if (ret == '*')
	{
		printf("玩家赢");
	}
	else if (ret == '#')
	{
		printf("电脑赢");
	}
	else if (ret == 'Q')
	{
		printf("平局");
	}
	DisplayBoard(board, ROW, COL);

}

int main()

{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
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
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	
	return 0;
}