#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	printf("������һ��Ҫ�������\n");
	scanf_s("%d",&num);
	//while (num)
	//{
	//	if (num % 2 == 1)    //���ܼ��㸺��
	//		count++;
	//	num /= 2;
	//}

	/*int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) && 1 == 1)  //�ɼ��㸺������������õ�д��
			count++;
	}*/

	while (num)
	{
		num = num &(num - 1);       //��򣬹ȸ������
		count++;
	}
	printf("%d",count);
	return 0;
}