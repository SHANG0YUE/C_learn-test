#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	return 0;
//}
//
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//统计一个数中 二进制中1的个数
//int count_one_bit(int n)//针对正整数
//{
//	int count = 0;
//	while (n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//#include<stdio.h>
//int count_one_bit(int n)//适用任何数但只计算32次
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		//使得n的二进制中最右边的1消失
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//先写函数如何使用
//	//TDD- 测试驱动开发
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//	return 0;
//}

//#include<stdio.h>
//求二进制中不同位的个数
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//
////写一个代码判断n是否为2的n次方
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n & (n - 1) == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//
//打印整数二进制的奇数位和偶数位
//void print(int m)
//{
//	//奇数位
//	int i = 0;
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	for (i = 31 ;i >= 1;i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

////字符串逆序
//#include<stdio.h>
//#include<string.h>
//void revrese(char* str)
//{
//    int len = strlen(str);
//    char* left = str;
//    char* right = str + len - 1;
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//
//}
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    revrese(arr);
//    printf("%s\n", arr);
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0;i < n;i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	total += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d", total);
//	return 0;
//}