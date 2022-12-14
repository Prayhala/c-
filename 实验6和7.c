//1．以下sum函数用来求a, b两数的和，在主函数中输入两个数并调用sum函数求其和。请仔细阅读以下程序，找出其中的错误并改正。
//#include <stdio.h>
//float sum(int ,int );//使用函数需声明
//int main()
//{
//	float x, y;
//	printf("%f\n", sum(x,y));//函数引用运算符()内传参格式应和引用函数传参格式相同
//	return 0;
//}
//float sum(float a, float b)//该函数需要有返回值
//{
//	float c;
//	c = a + b;//变量应和参数相同
//	return;
//}
//1.编写一个函数，统计字符数组中大写字母的个数。请填空。
//#include<stdio.h>
//int main()
//{
//	char string[100], Le;
//	int count(char s[]);
//	printf("input string:\n");
//	gets_s();        //输入字符串
//	Le = count(string);            //调用count函数
//	printf("大写字母有%d个", Le);
//	return 0;
//}
//int count(char s[])
//{
//	int sum = 0, i;
//	for (i = 0; s[i] != '\0'; i++)
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			sum++;
//	return sum;
//}
//2.函数yanghui能够按以下形式构成一个杨辉三角形。请填空。
//提示：杨辉三角形的特点是第i行有i个数字，每行的第一个、最后一个数均为1，其余每一个数正好等于它一行的同一列和前一列数之和。
#include <stdio.h>
#define N 10
int main()
{
	int i, j; int a[N][N] = {1};
	void yanghui(int a[][N]);      //申明yanghui函数
	yanghui(a);      //调用yanghui函数
	for (i = 0; i < N; i++)
	{
		for (j = 0; j<=i; j++)
			printf("%-4d", a[i][j]);
		printf("\n");
	}
	return 0;
}
void yanghui(int a[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1; a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
		for (j = 1; j <= i - 1; j++)
			a[i][j] = a[i-1][j]+a[i-1][j-1];
}
