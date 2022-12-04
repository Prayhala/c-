//#include<stdio.h>
//int main()
//{
//	int i, a[10];
//	float average=0;
//	for (i = 0; i < 10; i++)
//		scanf_s("%d", &a[i]);
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", a[i - 1]);
//		if (i % 3 == 0)
//			printf("\n");
//		average = average + a[i - 1];
//	}
//	printf("average=%f\n", average / 10);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i, j, m, n, x[3][4] = { 10,20,30,40,1,2,3,4,33,83,73,13 };
//	m = n = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			if (x[m][n] < x[i][j])
//			{
//				m = i; n = j;
//			}
//	printf("x[m][n]=%d,m=%d,n=%d", x[m][n], m, n);
//	return 0;
//}
//有一个排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中，并输出数组。
//
//用选择法对10个整数排序。10个整数用scanf函数输入
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0,min=0;
//	printf("请输入十个数\n");
//	for (i = 0; i < 10; i++)
//		scanf_s("%d", &arr[i]);
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		min = i;
//		for (j = i+1; j < 10; j++)
//		{
//			if (arr[min] > arr[j])
//				min = j;
//		}
//		if (min != i)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = tmp;
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//求一个3×3的整数矩阵对角线元素之和。
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0, j = 0;
//	int sum = 0;
//	printf("请输入3x3数组的元素\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", &arr[i][j]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//			if (j == 2)
//				printf("\n");
//			if (i==j||j+i==2)
//				sum += arr[i][j];
//		}
//	}
//	printf("对角线之和为%d", sum);
//	return 0;
//}

//有一篇文章，共有3行文字，每行有80个字符，要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
#include<stdio.h>
int main()
{
	char arr[3][80];
	int i = 0, j = 0;
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, ecount = 0;
	for (i = 0; i < 3; i++)
	{
		gets_s(arr[i],80);
		for (j = 0; j<3; j++)
		{
			if ('A' <= arr[i][j] && arr[i][j] < 'Z')
				acount++;
			else if ('a' <= arr[i][j] && arr[i][j] < 'z')
				bcount++;
			else if ('0' <= arr[i][j] && arr[i][j] < '9')
				ccount++;
			else if (arr[i][j] ==' ')
				dcount++;
			else
				ecount++;
		}
	}
	printf("英文大写字母%d个,小写字母%d个,数字%d个,空格%d个以及其他字符%d个", acount, bcount, ccount, dcount, ecount);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int i, j, m, n, x[3][4] = { 10,20,30,40,1,2,3,4,33,83,73,13 };//定义i,j,m,n为整形,数组x是整形数组
//	m = n = 0;                      //从数组第一个元素开始
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			if (x[m][n] < x[i][j])
//			{
//				m = i; n = j;    //将所求最大值所对应的元素下标附给m,n
//			}
//	printf("x[m][n]=%d,m=%d,n=%d", x[m][n], m, n);   //将上述循环后所存的最大数打印出来，并标明下标
//	return 0;
//}

