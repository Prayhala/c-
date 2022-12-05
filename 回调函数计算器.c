#include<stdio.h>
void menu()
{
	printf("**************************************************\n");
	printf("***  1.加        2.减         3.乘       *********\n");
	printf("***  4.除        5.取余       0.exit     *********\n");
	printf("**************************************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int jian(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int chu(int x, int y)
{
	return x / y;
}
int mo(int x,int y)
{
	return x % y;
}
void calc(int (*p)(int,int))
{
	int a = 0, b = 0;
	printf("请输入你要运算的两个数（用逗号隔开）\n");
		scanf_s("%d,%d",&a,&b);
		printf("结果为%d\n", p(a, b));
		printf("\n");
}
int main()
{
	printf("                             这是一台简易计算器                             nnnn\n");
	int input = 0;
	do
	{
		printf("请选择你要的功能>:\n");
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:calc(add); break;
		case 2:calc(jian); break;
		case 3:calc(mul); break;
		case 4:calc(chu); break;
		case 5:calc(mo); break;
		case 0:printf("退出\n"); break;
		default:printf("输入错误\n");
		}
	} while (input);
	return 0;
}