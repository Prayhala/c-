#include<stdio.h>
//int main()
//{
//	char arr[10] = { "China" };
//	for (int i = 0; arr[i] != '\0'; i++)
//		putchar(arr[i]);
//	return 0;
//}
//int main()
//{
//	int a = 0,n=0; int sum = 0,tmp=0;
//	scanf_s("%d %d",&a,&n);
//	for (int i = 0; i <n; i++)
//	{
//		tmp = tmp * 10 + a;    //计算求和    求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//		sum += tmp;                      //例如：2 + 22 + 222 + 2222 + 22222
//	}
//	printf("%d",sum);
//	return 0;
//}
////水仙花数 “水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。
//#include<math.h>
//int main()
//{
//	for (int i = 0; i < 999999; i++)
//	{
//		int count = 0;
//		int sum = 0, tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum +=pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };   //使用指针打印数组内容
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", *(p + i));
//	return 0;
//}