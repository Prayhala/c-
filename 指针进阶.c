#include<stdio.h>
//声明一个指向含有10个元素的数组的指针--数组指针--   int (*p)[10]
// 每个元素是一个函数指针--  int (*(*p)[])()
// 该函数的返回值是int，参数是int*  --int *(*p[])(int*)
// int (*(*p)[10])(int *)

//定义一个函数指针   --  (*F)()
// 指向的函数有两个int形参--  (*F)(int,int)
// 并且返回一个函数指针返回的指针指向一个有一个int形参且返回int的函数
//int (*(*F)(int,int))(int)

////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 =AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
//int main()
//{
//
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include<string.h>
void LeftRound(char arr[],int n)
{
	int left = 0;
	int right = strlen(arr)-1;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = arr[0];
		for (int j = 0; j < right; j++)
			arr[j] = arr[j + 1];
		arr[right] = tmp;
	}
}
int main()
{
	int n = 0;
	char arr[] = { "ABCDEF" };
	printf("%s", arr);
	printf("请输入你所要旋转的字符数\n");
	scanf_s("%d", &n);
	LeftRound(arr, n);
	printf("%s", arr);
	return 0;
}