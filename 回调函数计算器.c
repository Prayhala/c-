#include<stdio.h>
void menu()
{
	printf("**************************************************\n");
	printf("***  1.��        2.��         3.��       *********\n");
	printf("***  4.��        5.ȡ��       0.exit     *********\n");
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
	printf("��������Ҫ��������������ö��Ÿ�����\n");
		scanf_s("%d,%d",&a,&b);
		printf("���Ϊ%d\n", p(a, b));
		printf("\n");
}
int main()
{
	printf("                             ����һ̨���׼�����                             nnnn\n");
	int input = 0;
	do
	{
		printf("��ѡ����Ҫ�Ĺ���>:\n");
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:calc(add); break;
		case 2:calc(jian); break;
		case 3:calc(mul); break;
		case 4:calc(chu); break;
		case 5:calc(mo); break;
		case 0:printf("�˳�\n"); break;
		default:printf("�������\n");
		}
	} while (input);
	return 0;
}