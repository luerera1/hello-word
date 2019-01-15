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
		printf("���Ӯ");
	}
	else if (ret == '#')
	{
		printf("����Ӯ");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��");
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
		printf("��ѡ��:>\n");
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
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
	
	return 0;
}