#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 

//int main()//输出1—100之间的奇数
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf(" %d ", a);
//		a++;
//	}		
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4, };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0;
//		int j = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//			count++;
//			}
//		}
//		if (count == 1)//count起始为零，当i=j时count必+1，当count=1时只有一个单身值
//		{
//			printf("单身狗:%d\n", arr[i]);
//			break;
//		}
//
//	}
//	return 0;
	//或者用异或的方法:1^1^2^2^3^3^4^4^5=5
 //}

//
//写一个函数判断输入年是不是闰年
//
//int is_run(int a)
//{
//	if (((a % 4 == 0) && (a % 100 != 0) )|| (a % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (is_run(n) == 1)
//		printf("%d是闰年", n);
//	else
//		printf("%d不是闰年", n);
//	return 0;
//}
//
//
//找出1000到2000之间的闰年
//int run_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 1000;n <= 2000;n++)
//	{
//		run_year(n);
//		if (1 == run_year(n))
//			printf("%d ", n);
//	}
//	return 0;
//}

//


//
////二分查找
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//           0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}


//
////将num加1的函数
//void ADD(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	ADD(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

////求两个数的较大值的函数
//int who_biger(int* x, int* y)
//{
//	if (*x >* y)
//		return 1;
//	if (*x < *y)
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	who_biger(&a, &b);
//	if (who_biger(&a, &b))
//		printf("%d", a);
//	else
//		printf("%d", b);
//	return 0;
//}
//
//
////听听蜂鸣
//int main()
//{
//	printf("\a \a \a \a\n");
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if ((a != b) && (b != c) && (a != c))
//                printf("Ordinary triangle!\n");
//            else if ((a == b) && (b == c) && (a == c))
//                printf("Equilateral triangle!\n");
//            else
//                printf("Isosceles triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}


//
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 101;i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////计算n的阶乘并相加
//
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &a);
//	int i = 1;
//	for (i = 1;i <= a;i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}


//
//
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1;a <= 100;a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}



////写代码将三个数从大到小输出
//int main()
//{
//	int a = 0, b = 0, c = 0, i = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	//将a变为最大的数
//	if (a < b)
//	{
//		i = a;
//		a = b;
//		b = i;
//	}
//	if (a < c)
//	{
//		i = a;
//		a = c;
//		c = i;
//	}
//	//使b比c大
//	if (b < c)
//	{
//		i = b;
//		b = c;
//		c = i;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//#include<stdio.h>
////打印1-100之间所有3的倍数的数字
//int main()
//{
//	int a = 0;
//	for (a = 1;a<101;a++)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//	}
//	return 0;
//}



////求两个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, temp = 0;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	while (a % b != 0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("最大公约数为%d", b);
//	return 0;
//}

////打印1000-2000间的闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000;i < 2001;i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}






////打印100~200之间的素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 100;i < 201;i++)
//	{
//		int a = sqrt(i);
//		int count = 0;
//		for (j = 1;j <= a;j++)
//		{
//			if (i % j == 0)
//				count++;
//		}
//		if (count == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


////数1-100中9的个数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i < 101;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		else if(i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}



////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = -1;
//	float sum = 0.0;
//	for (i = 1;i <= 5;i++)
//	{
//		j = (-j);
//		sum += 1.0 / i *j;
//	}
//	printf("%lf", sum);
//	return 0;
//}


////求十个整数中的最大值
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 11,21,12,11,22,15,16,25,9 ,23};//任意十个整数
//	for (i = 1;i < 10;i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("%d", arr[0]);
//	return 0;
//}

////乘法口诀表
//#include<stdio.h>
//int main()
//{
//	int i = 0;//行
//	int j = 0;//列
//	for (i = 1;i < 10;i++)
//	{
//		j = 1;
//		for (j = 1;j <= i;j++)
//			printf("%d*%d=%.2d ", j, i, i * j);
//		printf("\n");
//	}
//	return 0;
//}

////二分查找法
//
//#include<stdio.h>
//int main()
//{
//	int k = 9;
//	int left = 0, right = 0, mid = 0, sz = 0;
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	right = sz - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}