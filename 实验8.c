#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////1��д����������Ԥ�ڽ�����ϻ����벢�������������֤��Ľ����������
//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3 };
//	int* p, i;
//	p = a;
//	for (i = 0; i < 3; i++)
//		printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i));
//	return 0;
//}

////2.���³�����Ϊ���Ӽ���������3����������ָ�뷨��3�������������������ա�
//#include <stdio.h>
//int main()
//{
//	void swap(int* pt1, int* pt2);
//	int a, b, c;
//	int* p1, * p2, * p3;
//	printf("������������a,b,c:");
//	scanf_s("%d,%d,%d", &a, &b, &c);
//	p1 = &a; p2 = &b; p3 = &c;
//	if (a > b) 
//		swap(p1, p2);
//	if (a > c)
//		swap(p1, p3);
//	if (b > c) 
//		swap(p2, p3);
//	printf("������������Ϊ��%d,%d,%d\n", a, b, c);
//	return 0;
//}
//void swap(int* pt1, int* pt2)
//{
//	int p;
//	p = *pt1;
//	*pt1 = *pt2;
//	*pt2 = p;
//}

//3.���³���Ĺ���Ϊ���Ӽ�������3��3���;���Ԫ�أ��ú���ʵ��3��3���;���ת�á��ϻ����벢�����������
//���ݳ������н�������ͨ��ָ�������������Ԫ�صķ�������̼��ɡ�
//#include <stdio.h>
//int main()
//{
//	void move(int* pointer);
//	int a[3][3], * p, i, j;
//	printf("�������������Ԫ�أ�\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", &a[i][j]);
//	p = &a[0][0];
//	move(p);
//	printf("ת�ú�ľ���Ϊ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//void move(int* pt)
//{
//	int i, j, t;
//	for (i = 0; i < 3; i++)
//		for (j = i; j < 3; j++)
//		{
//			t = *(pt + 3 * i + j);
//			*(pt + 3 * i + j) = *(pt + 3 * j + i);
//			*(pt + 3 * j + i) = t;
//		}
//}
//�ڴ˻����ϣ��������2������
//��1���������������Ԫ�����������������±귨�������Ϊָ���������
 /*int main()
{
	void move(int* pointer);
	int a[3][3], * p, i, j;
	p = &a[0][0];
	printf("�������������Ԫ�أ�\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", (p + 3*i + j));
	move(p);
	printf("ת�ú�ľ���Ϊ��\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", *(p + 3 * i + j));
		printf("\n");
	}
	return 0;
}
void move(int* pt)
{
	int i, j, t;
	for (i = 0; i < 3; i++)
		for (j = i; j < 3; j++)
		{
			t = *(pt + 3 * i + j);
			*(pt + 3 * i + j) = *(pt + 3 * j + i);
			*(pt + 3 * j + i) = t;
		}
}*/
////��2�����������move�������β���ָ������Ԫ�ص�ָ���������Ҫ���βθ�Ϊָ��һά�����ָ�������
////�޸ĳ���󣬵������г��򣬱�֤�����ȷ��
//int main()
//{
//	void move(int(*pt1)[3]);
//	int a[3][3], * p1, (*p2)[3], i, j;
//	p1 = &a[0][0];
//	printf("�������������Ԫ�أ�\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", (p1 + 3 * i + j));
//	p2 = a;
//		move(p2);
//	printf("ת�ú�ľ���Ϊ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			printf("%d ", *(p1 + 3 * i + j));
//		printf("\n");
//	}
//	return 0;
//}
//void move(int (*pt)[3])
//{
//	int i, j, t;
//        for (i = 0; i < 3; i++)
//	    for (j = i; j < 3; j++)
//		{
//			t = *(*(pt + i) + j);
//			*(*(pt + i) + j) = *(*(pt + j) + i);
//			*(*(pt + j) + i)=t;
//		}
//}

////4.дһ��������һ���ַ����ĳ��ȡ���main�����������ַ�����������䳤�ȡ�
////�ֱ��ڳ����а����������������
////��1�������β�����������
// int my_strlen(char arr[])
//{
//	 int i = 0, count = 0;;
//	 for (i = 0; arr[i] != '\0'; i++)
//		 count++;
//	 return count;
//}
//int main()
//{
//	char arr[4] = { "0" };
//	gets_s(arr, 4);
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
////��2�������β���ָ�������
////�������Ƚϣ���������ɡ�
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end)
//	{
//		end++;
//	}
//	return (int)(end - start);
//}
//int main()
//{
//	char arr[4] = {"0"};
//	gets_s(arr,4);
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

////5.��һ��5��5����������Ԫ�ط������ģ���С��Ԫ�ط������Ͻǣ�дһ����ʵ��֮������main�������á�
void ca(int arr[][5])
{
	int i = 0, j = 0,tmp1=0,tmp2=0,i1=0,i2=0,j1=0,j2=0;
	for (i = 0; i < 5; i++)//��
	{
		for (j = 0; j < 5; j++)//��
		{
			if (arr[i1][j1] < arr[i][j])
			{
				i1 = i, j1 = j;//��¼���ֵ���±�
			}
			if (arr[i2][j2] > arr[i][j])
			{
				i2 = i, j2 = j;//��¼��Сֵ�±�
			}

		}
	}
	tmp2 = arr[2][2];
	arr[2][2] = arr[i1][j1];
	arr[i1][j1] = tmp2;
	tmp1 = arr[0][0];
	arr[0][0] = arr[i2][j2];
	arr[i2][j2] = tmp1;
}
int main()
{
	int i = 0,j=0;
	int arr[5][5] = {0};
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			scanf_s("%d", &arr[i][j]);
	}
	ca(arr);
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%2d  ", arr[i][j]);
		printf("\n");
	}
	return 0;
}