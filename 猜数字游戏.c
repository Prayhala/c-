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
		printf("请输入你猜的数字\n");
		scanf_s("%d", &input);
		if (input > ret)
			printf("猜大了\n");
		else if (input < ret)
			printf("猜小了\n");
		else
		{
			printf("猜中了\n");
			break;
		}
	}
}
int main()
{
	int n = 0;
	srand((unsigned)time(NULL));
	printf("猜数字游戏\n");
	do
	{	
		menu();
		scanf_s("%d",&n);
		switch (n)
		{
		case 1:game(); break;
		case 0:printf("退出游戏\n"); break;
		default:printf("输入错误,请重新输入\n");
		}
	} while (n);
	return 0;
}