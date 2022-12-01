#include<stdio.h>
int main()
{
	int a = 0, b = 0,c=0;
	printf("请输入两个数(以逗号隔开)\n");
	scanf_s("%d,%d", &a, &b);
	//c = (a > b) ? a : b;
	//while (c)
	//{
	//	if (a % c == 0 && b % c == 0)   //效率低
	//		break;
	//	c--;
	//}
	//printf("%d和%d的最大公因数为%d", a, b, c);
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("最大公因数为%d", b);
	return 0;
}