#define _CRT_SECURE_NO_WARNINGS 1
//������ϰ
#include<stdio.h>
#include<math.h>
//int is_prime(int i)
//{
//	int k = 0;
//	for (k = 2;k <= sqrt(i);k++)
//	{
//		if (i % k == 0)
//			return 0;
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


//���ֲ��Һ���
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0, right = sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//�����
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���ֲ��ҵ�
//	//�ҵ��ˣ������±�
//	//�Ҳ��������� -1
//	int ret = binary_search(arr, k,sz );
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}


//��������������ó����¶�����
//#include<stdio.h>
//int main()
//{
//    int y = 0;
//    int m = 0;
//    while (scanf("%d%d", &y, &m) != EOF)
//    {
//        if (m == 2)
//        {
//            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//                printf("%d", 29);
//            else
//                printf("%d", 28);
//        }
//        else
//            switch (m)
//            {
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12:
//                printf("%d", 31);
//                break;
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                printf("%d", 30);
//                break;
//            }
//    }
//
//
//    return 0;
//}


//���д�֣�ȥ��ȥβ����ƽ��
//int main()
//{
//	int temp = 0;
//	int i = 0;
//	float l = 0.0;
//	float sum = 0.0;
//	int arr[7] = {0};
//	for (i = 0;i < 7;i++)
//		scanf("%d", &arr[i]);
//	for (i = 1;i < 7;i++)
//		if (arr[0] > arr[i])
//		{
//			temp = arr[0];
//			arr[0] = arr[i];
//			arr[i] = temp;
//		}
//
//	for (i = 5;i >= 0;i--)
//		if (arr[6] < arr[i])
//		{
//			temp = arr[6];
//			arr[6] = arr[i];
//			arr[i] = temp;
//		}
//
//	for (i = 1;i < 6;i++)
//		sum += arr[i];
//	l = sum / 5.0;
//	printf("%.2f", l);
//	return 0;
//}


////�����ж�����
//int is_run(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	printf("�������\n");
//	scanf("%d", &y);
//	if (is_run(y) == 1)
//		printf("%d������", y);
//	else
//		printf("%d��������\n",y);
//	return 0;
//}

//дһ������������������

//void get_change(int* a, int* b)
//{
//	int i = 0;
//	i = (*a);
//	(*a) = (*b);
//	(*b) = i;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	get_change(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//void do_print(i)
//{
//	int a = 0,b=0;
//	for (a = 1;a <= i;a++)
//	{
//		b = 0;
//		for (b = 1;b <= a;b++)
//			printf("%d*%-2d=%-3d ", b, a, a * b);
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	do_print(i);
//	return 0;
//}