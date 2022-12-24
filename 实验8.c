#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////1．写出下面程序的预期结果。上机输入并运行下面程序，验证你的结果并分析。
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

////2.以下程序功能为：从键盘上输入3个整数，用指针法对3个整数排序并输出。请填空。
//#include <stdio.h>
//int main()
//{
//	void swap(int* pt1, int* pt2);
//	int a, b, c;
//	int* p1, * p2, * p3;
//	printf("请输入三个数a,b,c:");
//	scanf_s("%d,%d,%d", &a, &b, &c);
//	p1 = &a; p2 = &b; p3 = &c;
//	if (a > b) 
//		swap(p1, p2);
//	if (a > c)
//		swap(p1, p3);
//	if (b > c) 
//		swap(p2, p3);
//	printf("排序后的三个数为：%d,%d,%d\n", a, b, c);
//	return 0;
//}
//void swap(int* pt1, int* pt2)
//{
//	int p;
//	p = *pt1;
//	*pt1 = *pt2;
//	*pt2 = p;
//}

//3.以下程序的功能为：从键盘输入3×3整型矩阵元素，用函数实现3×3整型矩阵转置。上机输入并调试下面程序
//根据程序及运行结果，理解通过指针变量引用数组元素的方法及编程技巧。
//#include <stdio.h>
//int main()
//{
//	void move(int* pointer);
//	int a[3][3], * p, i, j;
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", &a[i][j]);
//	p = &a[0][0];
//	move(p);
//	printf("转置后的矩阵为：\n");
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
//在此基础上，完成以下2项任务：
//（1）上面程序中数组元素输入和输出采用了下标法，将其改为指针变量法。
 /*int main()
{
	void move(int* pointer);
	int a[3][3], * p, i, j;
	p = &a[0][0];
	printf("请输入数组矩阵元素：\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", (p + 3*i + j));
	move(p);
	printf("转置后的矩阵为：\n");
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
////（2）上面程序中move函数的形参是指向数组元素的指针变量，现要求将形参改为指向一维数组的指针变量。
////修改程序后，调试运行程序，保证结果正确。
//int main()
//{
//	void move(int(*pt1)[3]);
//	int a[3][3], * p1, (*p2)[3], i, j;
//	p1 = &a[0][0];
//	printf("请输入数组矩阵元素：\n");
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", (p1 + 3 * i + j));
//	p2 = a;
//		move(p2);
//	printf("转置后的矩阵为：\n");
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

////4.写一函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。
////分别在程序中按以下两种情况处理：
////（1）函数形参用数组名。
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
////（2）函数形参用指针变量。
////作分析比较，掌握其规律。
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

////5.将一个5×5矩阵中最大的元素放在中心，最小的元素放在左上角，写一函数实现之。并用main函数调用。
void ca(int arr[][5])
{
	int i = 0, j = 0,tmp1=0,tmp2=0,i1=0,i2=0,j1=0,j2=0;
	for (i = 0; i < 5; i++)//行
	{
		for (j = 0; j < 5; j++)//列
		{
			if (arr[i1][j1] < arr[i][j])
			{
				i1 = i, j1 = j;//记录最大值的下标
			}
			if (arr[i2][j2] > arr[i][j])
			{
				i2 = i, j2 = j;//记录最小值下标
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