#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////水仙花
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		//判断i是否为自幂数
//		int sum = 0;
//		//1.计算i的位数
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.获取i的每一位，并计算每一位的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n, n);
//			tmp /= 10;
//		}
//		//3.判断并输出
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上-linr行
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0;j < line-1-i;j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0;j < 2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下-line-1行
//	for (i = 0;i < line-1;i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0;j <=i ;j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0;j <2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	return 0;
}