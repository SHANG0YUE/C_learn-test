#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//冒泡排序
//void bubble_sort(int *arr)
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		int flag = 1;//假设已经有序
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//发现无序
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//
//	return 0;
//}
//void init(int arr[3][5],int row,int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < row;i++)
//	{
//		for (j = 0;j < col;j++)
//		{
//			arr[i][j]=0;
//		}
//	}
//}
//void print(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < row;i++)
//	{
//		for (j = 0;j < col;j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void reverse(int* arr,int sz)//只会一维数组的逆置
//{
//	int i = 0;
//	for (i = 0;i <= sz / 2;i++)
//	{
//		int tmp = 0;
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + sz - 1 - i);
//		*(arr + sz - 1 - i) = tmp;
//	}
//
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	//init(arr,3,5);
//	//print(arr, 3, 5);
//	reverse(arr, sz);
//	return 0;
//}


//交换数组
void swap(int* i, int* j)
{
	int tmp = 0;
	tmp = *i;
	*i = *j;
	*j = tmp;
}
int main()
{
	int k = 0;
	int arr1[9] = { 1,2,3,4,5,6,7,8,9 };
	int arr2[9] = { 0,0,0,0,0,0,0,0,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (k = 0;k < sz;k++)
		swap(arr1 + k, arr2 + k);
	return 0;
}