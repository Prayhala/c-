#include<stdio.h>
int main()
{
	int a = 0, b = 0,c=0;
	printf("������������(�Զ��Ÿ���)\n");
	scanf_s("%d,%d", &a, &b);
	//c = (a > b) ? a : b;
	//while (c)
	//{
	//	if (a % c == 0 && b % c == 0)   //Ч�ʵ�
	//		break;
	//	c--;
	//}
	//printf("%d��%d���������Ϊ%d", a, b, c);
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("�������Ϊ%d", b);
	return 0;
}