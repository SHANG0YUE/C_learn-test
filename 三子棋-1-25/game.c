#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initbroad(char broad[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			broad[i][j] = ' ';
		}
	}
}
void display(char broad[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
			{
				printf(" %c |", broad[i][j]);
			}
			else
				printf(" %c \n", broad[i][j]);
		}
		if (i < row - 1)
		{
			printf("---|---|---\n");
		}
	}
}
void player(char broad[ROW][COL], int row, int col)
{
	printf("玩家走。\n");
	int i, j;
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (broad[i - 1][j - 1] == ' ')
			{
				broad[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("该格子已被占用。\n");
		}
		else
			printf("坐标非法。\n");
	}
}
void computer(char broad[ROW][COL], int row, int col)
{
	printf("电脑走。\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (broad[i][j] == ' ')
		{
			broad[i][j] = '#';
			break;
		}
	}
}
static int is_full(char broad[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (broad[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char checkwin(char broad[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (broad[i][0] == broad[i][1]
			&& broad[i][1] == broad[i][2]
			&& broad[i][0] != ' ')
			return broad[i][0];
	}
	for (i = 0; i < col; i++)
	{
		if (broad[0][i] == broad[1][i]
			&& broad[1][i] == broad[2][i]
			&& broad[0][i] != ' ')
			return broad[0][i];
	}
	if ((broad[0][0] == broad[1][1] && broad[1][1] == broad[2][2]
		&& broad[1][1] != ' ')
		|| (broad[2][0] == broad[1][1] && broad[1][1] == broad[0][2]
			&& broad[1][1] != ' '))
	{
		return broad[1][1];
	}
	if (is_full(broad, row, col))
	{
		return 'p';
	}
	return 'c';
}