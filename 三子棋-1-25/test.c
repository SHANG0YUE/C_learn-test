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
		//�����
		player(broad, ROW, COL);
		//�ж�ʤ��
		ret = checkwin(broad, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		display(broad, ROW, COL);
		//������
		computer(broad, ROW, COL);
		//�ж�ʤ��
		ret = checkwin(broad, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		display(broad, ROW, COL);
	}
	display(broad, ROW, COL);
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == 'p')
		printf("ƽ�֡�\n");

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
		printf("��ѡ��\n");
		scanf("%d", &n);
		switch (n)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (n);
	return 0;
}