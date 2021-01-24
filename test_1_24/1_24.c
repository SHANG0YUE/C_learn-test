#define _CRT_SECURE_NO_WARNINGS 1
//练习
#include<stdio.h>
//#include<math.h>
//int is_prime(int i)
//{
//	//判断i是否为素数
//	int j = 0;
//	for (j = 2;j <= sqrt(i);j++)
//	{
//		if (i % j == 0)
//			return 0;//只要有一次成立，这必然不是素数
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


////写一个函数判断一年是不是闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
////return((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
////为真返回1，为假返回0.
//
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
// }



////写一个函数，二分查找找下标
//int binary_search(int arr[],int k,int sz)
//////int binary_search(int* arr,int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	if(left>right)
//		return -1;
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	//二分查找，找到返回下标，找不到返回-1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是%d", ret);
//	return 0;
//}





}