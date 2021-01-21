#define _CRT_SECURE_NO_WARNINGS 1
//2021/1/20


//二分查找
#include <stdio.h>



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = 0, left = 0, right = 0, mid = 0;
//	int k = 0;
//	scanf("%d", &k);
//	sz = sizeof(arr) / sizeof(arr[0]);//10
//	//sizeof(arr)计算的是数组的总大小，单位是字节-40
//	//sizeof（arr[0]）,计算的是数组第一个元素的大小-4
//	right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		//防止溢出mid=left+(right-left)/2
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}


////编写代码，演示多个数字从两边向中间移动
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
//		system("cls");//system函数是执行系统命令的函数
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



////编写代码，模拟用户三次登陆
//int main()
//{
//	int i = 3;
//	char passward[20] = { 0 };
//	for (i = 0;i < 3;i++) 
//	{
//		printf("请输入密码：>");
//		scanf("%s", passward);
//		//比较两个字符不能用==，应该使用strcmp函数
//		if (strcmp(passward, "123456")==0)//假定密码为字符串123456
//		{
//			printf("密码正确,登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误请重新输入\n");
//	}
//	if (i == 3)
//	{
//		printf("密码输入错误三次，退出程序！\n");
//	}
//	return 0;
// }





//猜数字游戏

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////生成一个随机数（1-100）
////菜单
////猜数字给反馈
////直到猜到才停止
//void menu()
//{
//	printf("****************************\n");
//	printf("******** 1. play   *********\n");
//	printf("******** 2. exit   *********\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//生成随机数(1-100)
//	int ret = rand()%100+1 ;//用来生成随机数
//	//printf("%d\n", ret); 
//	//猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	 }
//}
//int main()
//{
//	int input = 0;
//	//起始值设置一次就行了
//	srand((unsigned int)time(NULL));//time()函数返回的就是时间戳
//	do
//	{
//		menu();
//		printf("请选择（1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();
//				break;
//		case 0:
//				printf("退出游戏\n");
//				break;
//		default:
//			printf("输入错误\n");
//			break;
//		} 
//	} while (input);
//	return 0;
//}


////关机小程序
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input [20]= "";
//	system("shutdown -s -t 60");//倒计时开始关机
//again:
//	printf("请注意，宁的电脑将在一分钟内关机，如果输入：我是猪，则取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
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

