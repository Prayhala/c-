#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	printf("请输入一个要计算的数\n");
	scanf_s("%d",&num);
	//while (num)
	//{
	//	if (num % 2 == 1)    //不能计算负数
	//		count++;
	//	num /= 2;
	//}

	/*int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) && 1 == 1)  //可计算负数，但不是最好的写法
			count++;
	}*/

	while (num)
	{
		num = num &(num - 1);       //最精简，谷歌笔试题
		count++;
	}
	printf("%d",count);
	return 0;
}