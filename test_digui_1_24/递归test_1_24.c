#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////�ݹ���ϰ
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);   
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	//��ӡnum��ÿһλ
//	//1 2 3 4
//	print(num);//print������numÿһλ��ӡ
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4 
//	return 0;
//}

////������ʾstrlen��Ч��(ѭ��)
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//  //����������Ԫ�صĵ�ַ-char*
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//
////�ݹ�ķ�����ʾ
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////my_strlen("abcdef")
////1+my_strlen("bcdef")
////1+1+my_strlen("cdef")
////1+1+1+my_strlen("def")
////1+1+1+1+my_strlen("ef")
////1+1+1+1+1+my_strlen("f")
////1+1+1+1+1+1+my_strlen("")
////1+1+1+1+1+1+0
//int main()
//{
//	char arr[] = "abcdef";
//  //����������Ԫ�صĵ�ַ-char*
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

////��n�Ľ׳�
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//쳲���������-�ݹ�
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

////ѭ��ʵ��쳲���������
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1; 
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}



//�ַ������򣨵ݹ�ʵ�֣�
//void fan_put(char* p)
//{
//	if (*p != 0)
//	{
//		fan_put(p + 1);
//		printf("%c",*p);
//	}
//}
////��ҵ��ϰ
//int main()
//{
//	char arr[] = "abcdef";
//	fan_put(arr);
//	return 0;
//}

////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int x_sum(int i)
//{
//	if (i > 0)
//		return i % 10 + x_sum(i / 10);
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int sum = x_sum(i);
//	printf("%d", sum);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//int s = 1;
//int n_k(int n, int k)
//{
//	if (k != 0)
//	{
//		k--;
//		s=n* n_k(n, k);
//	}
//	return s;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret=n_k(n, k);
//	printf("%d", ret);
//	return 0;
//}