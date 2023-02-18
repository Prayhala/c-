#include<stdio.h>
////汽水瓶问题
//int main()
//{
//	int n = 0, empty = 0, count = 0;
//	scanf_s("%d", &n);
//	while (n / 3)
//	{
//		empty = n % 3;
//		n /= 3;
//		count += n;
//		n += empty;
//	}
//	if (n % 2 == 0)
//		count++;
//	printf("%d", count);
//	return 0;
//}

////字符串正反链接
//#include<string.h>
//int main()
//{
//	//方法一
//	/*char arr[101] = { 0 };
//	int i = 0;
//	gets_s(arr, 50);
//	int a = (int)strlen(arr);
//	for (i = 0; i < a; i++)
//	{
//		arr[2*a-1-i] = arr[i];
//	}
//	arr[2*a] = '\0';
//	puts(arr);*/
//
//	//方法二 利用库函数strcpy
//	char arr1[51] = { 0 }, arr2[101] = {0};
//	gets_s(arr2, 50);
//	int a = (int)strlen(arr2);
//	for (int i = 0; i < a; i++)
//	{
//		arr1[i] = arr2[a-i-1];
//	}
//	strcpy(arr2+a, arr1);
//	puts(arr2);
//	return 0;
//}

////证明任何一个整数m的三次方都可以写成m个连续奇数之和
//int main()
//{
//	int m = 0,i=0,a1=0;
//	scanf_s("%d", &m);
//	a1 = m * m - m + 1;
//	printf("%d*%d*%d=%d=%d", m, m, m, m * m * m,a1);
//	for (i = 0; i < m-1; i++)
//	{
//		printf("+%d", a1+=2);
//	}
//	return 0;
//}

////将四个整数按从小到大排列
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0,j=0,tmp=0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	//冒泡排序
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////输入一个字符串，数出其中字母的个数
////利用库函数
//#include<ctype.h>
//#include<string.h>
//int main()
//{
//	char arr[100] = { 0 };
//	gets_s(arr, 100);
//	int count = 0;
//	for(int i=0;i<strlen(arr);i++)
//	{
//		if (isalpha(arr[i]))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

////输出斐波那契数列
//void fib(int n)
//{
//	int a = 1, b = 1 , c = 1;
//	for(int i=1;i<=n;i++)
//	{
//		if(i>2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		printf("%d ", c);
//	}		
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	//利用迭代
//	fib(n);
//	return 0;
//}

////求到n的阶层之和
//int main()
//{
//	int n = 0, sum =0,sum1 = 1;
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum1 = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			sum1 *= j;
//		}
//		sum += sum1;
//	}
//	printf("%d", sum);
//	return 0;
//}

////求pi
//int main()
//{
//	double n = 1,pi=0,flag=1;
//	while (1 / n >= 1e-6)
//	{
//		pi += (flag / n);
//		flag = flag * (-1);
//		n += 2;
//	}
//	printf("%.6lf", 4 * pi);
//	return 0;
//}

