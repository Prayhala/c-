#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***********************************************\n");
	printf("*********   1.play              0.exit*********\n");
	printf("***********************************************\n");
}
void game()
{
	int input = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("��������µ�����\n");
		scanf_s("%d", &input);
		if (input > ret)
			printf("�´���\n");
		else if (input < ret)
			printf("��С��\n");
		else
		{
			printf("������\n");
			break;
		}
	}
}
int main()
{
	int n = 0;
	srand((unsigned)time(NULL));
	printf("��������Ϸ\n");
	do
	{	
		menu();
		scanf_s("%d",&n);
		switch (n)
		{
		case 1:game(); break;
		case 0:printf("�˳���Ϸ\n"); break;
		default:printf("�������,����������\n");
		}
	} while (n);
	return 0;
}