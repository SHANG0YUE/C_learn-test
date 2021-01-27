#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
void game()
{
	char ret = 0;
	char broad[ROW][COL] = { 0 };
	Initbroad(broad, ROW, COL);
	display(broad, ROW, COL);
	while (1)
	{
		//玩家下
		player(broad, ROW, COL);
		//判断胜负
		ret = checkwin(broad, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		display(broad, ROW, COL);
		//电脑下
		computer(broad, ROW, COL);
		//判断胜负
		ret = checkwin(broad, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		display(broad, ROW, COL);
	}
	display(broad, ROW, COL);
	if (ret == '*')
		printf("玩家赢。\n");
	else if (ret == '#')
		printf("电脑赢。\n");
	else if (ret == 'p')
		printf("平局。\n");

}
void menu()
{
	printf("#############\n");
	printf("###0.exit####\n");
	printf("###1.start###\n");
	printf("#############\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int n = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &n);
		switch (n)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误。\n");
			break;
		}
	} while (n);
	return 0;
}