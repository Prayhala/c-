#include<stdio.h>
int main()
{
	int a = 0, b = 0,c=0;
	printf("请输入两个数(以逗号分隔)\n");
	scanf_s("%d,%d",&a,&b);
	//c = (a > b) ? a : b;
	//while (c)
	//{
	//	if (c % a == 0 && c % b == 0)   //这种方法的效率低
	//		break;
	//	c++;
	//}
	//printf("%d和%d的最小公倍数为%d\n", a, b, c);
	// 
	//int d = a * b;
	//while (a % b)
	//{
	//    c = a % b;       //这种方法比第一种效率更高，但需要算两数的最大公因数
	//	a = b; 
	//	b= c;
	//}
	//c = d /b;
	//printf("%d和%d的最小公倍数为%d\n", a, b, c);

	int i = 0;
	c = (a > b) ? a : b;
	for (i = 1;; i++)
	{
		if (c * i % a == 0 && c * i % b == 0)     //效率最高
			break;
	}
	printf("%d和%d的最小公倍数为%d\n", a, b, c*i);
	return 0;
}