#include<stdio.h>
int main()
{
	int a = 0, b = 0,c=0;
	printf("������������(�Զ��ŷָ�)\n");
	scanf_s("%d,%d",&a,&b);
	//c = (a > b) ? a : b;
	//while (c)
	//{
	//	if (c % a == 0 && c % b == 0)   //���ַ�����Ч�ʵ�
	//		break;
	//	c++;
	//}
	//printf("%d��%d����С������Ϊ%d\n", a, b, c);
	// 
	//int d = a * b;
	//while (a % b)
	//{
	//    c = a % b;       //���ַ����ȵ�һ��Ч�ʸ��ߣ�����Ҫ���������������
	//	a = b; 
	//	b= c;
	//}
	//c = d /b;
	//printf("%d��%d����С������Ϊ%d\n", a, b, c);

	int i = 0;
	c = (a > b) ? a : b;
	for (i = 1;; i++)
	{
		if (c * i % a == 0 && c * i % b == 0)     //Ч�����
			break;
	}
	printf("%d��%d����С������Ϊ%d\n", a, b, c*i);
	return 0;
}