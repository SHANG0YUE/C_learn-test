#define _CRT_SECURE_NO_WARNINGS 1
//2021/1/20


//���ֲ���
#include <stdio.h>



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = 0, left = 0, right = 0, mid = 0;
//	int k = 0;
//	scanf("%d", &k);
//	sz = sizeof(arr) / sizeof(arr[0]);//10
//	//sizeof(arr)�������������ܴ�С����λ���ֽ�-40
//	//sizeof��arr[0]��,������������һ��Ԫ�صĴ�С-4
//	right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		//��ֹ���mid=left+(right-left)/2
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ����±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}


////��д���룬��ʾ������ִ��������м��ƶ�
//#include<windows.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to China!!!";
//	char arr2[] = "###################";
//	char buf[] = "China";
//	//[C h i n a \0]
//	// 0 1 2 3 4  5
//	//sizeof(buf)/sizeof(buf[0])-2;
//	//strlen(buf)-1;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//system������ִ��ϵͳ����ĺ���
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



////��д���룬ģ���û����ε�½
//int main()
//{
//	int i = 3;
//	char passward[20] = { 0 };
//	for (i = 0;i < 3;i++) 
//	{
//		printf("���������룺>");
//		scanf("%s", passward);
//		//�Ƚ������ַ�������==��Ӧ��ʹ��strcmp����
//		if (strcmp(passward, "123456")==0)//�ٶ�����Ϊ�ַ���123456
//		{
//			printf("������ȷ,��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("�����������������\n");
//	}
//	if (i == 3)
//	{
//		printf("��������������Σ��˳�����\n");
//	}
//	return 0;
// }





//��������Ϸ

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////����һ���������1-100��
////�˵�
////�����ָ�����
////ֱ���µ���ֹͣ
//void menu()
//{
//	printf("****************************\n");
//	printf("******** 1. play   *********\n");
//	printf("******** 2. exit   *********\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//���������(1-100)
//	int ret = rand()%100+1 ;//�������������
//	//printf("%d\n", ret); 
//	//������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	 }
//}
//int main()
//{
//	int input = 0;
//	//��ʼֵ����һ�ξ�����
//	srand((unsigned int)time(NULL));//time()�������صľ���ʱ���
//	do
//	{
//		menu();
//		printf("��ѡ��1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();
//				break;
//		case 0:
//				printf("�˳���Ϸ\n");
//				break;
//		default:
//			printf("�������\n");
//			break;
//		} 
//	} while (input);
//	return 0;
//}


////�ػ�С����
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input [20]= "";
//	system("shutdown -s -t 60");//����ʱ��ʼ�ػ�
//again:
//	printf("��ע�⣬���ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
// 

