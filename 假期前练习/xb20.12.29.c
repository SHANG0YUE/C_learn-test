#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 

//int main()//���1��100֮�������
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
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0;
//		int j = 0;
//		for (j = 0;j < sz;j++)
//		{
//			if (arr[i] == arr[j])
//			{
//			count++;
//			}
//		}
//		if (count == 1)//count��ʼΪ�㣬��i=jʱcount��+1����count=1ʱֻ��һ������ֵ
//		{
//			printf("����:%d\n", arr[i]);
//			break;
//		}
//
//	}
//	return 0;
	//���������ķ���:1^1^2^2^3^3^4^4^5=5
 //}

//
//дһ�������ж��������ǲ�������
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
//		printf("%d������", n);
//	else
//		printf("%d��������", n);
//	return 0;
//}
//
//
//�ҳ�1000��2000֮�������
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
////���ֲ���
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
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
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}


//
////��num��1�ĺ���
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

////���������Ľϴ�ֵ�ĺ���
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
////��������
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

////����n�Ľ׳˲����
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



////д���뽫�������Ӵ�С���
//int main()
//{
//	int a = 0, b = 0, c = 0, i = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	//��a��Ϊ������
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
//	//ʹb��c��
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
////��ӡ1-100֮������3�ı���������
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



////�������������Լ��
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
//	printf("���Լ��Ϊ%d", b);
//	return 0;
//}

////��ӡ1000-2000�������
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






////��ӡ100~200֮�������
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


////��1-100��9�ĸ���
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



////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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


////��ʮ�������е����ֵ
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 11,21,12,11,22,15,16,25,9 ,23};//����ʮ������
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

////�˷��ھ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;//��
//	int j = 0;//��
//	for (i = 1;i < 10;i++)
//	{
//		j = 1;
//		for (j = 1;j <= i;j++)
//			printf("%d*%d=%.2d ", j, i, i * j);
//		printf("\n");
//	}
//	return 0;
//}

////���ֲ��ҷ�
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}