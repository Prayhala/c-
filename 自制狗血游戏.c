#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main()
{
	int zh = 0;
	int password = 0;
	int i = 1, a = 1;
	printf("            冒险(无敌版)           \n");
	printf("账号:");
	for (a = 0; a < 3; a++)
	{
		scanf_s("%d", &zh);
		if (zh == 359767614)
		{
			printf("输入正确\n");
			break;
		}
		else
			printf("输入错误，请重新输入\n");
	}
	if (a == 3)
	{
		printf("账号输错已达三次，退出游戏\n");
		return 0;
	}
	printf("密码:");
	for (i = 1; i <= 3; i++)
	{
		scanf_s("%d", &password);
		if (password == 362362)
		{
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误，请重新输入\n");
		if (i == 3)
		{
			printf("密码输错已达三次，自动退出游戏\n");
			return 0;
		}
	}

	if (i == 3)
		printf("输入错误，退出程序\n");
	Sleep(1000);
	system("cls");
	printf("请选择角色>(1/2)>:");
	int b, c, d, e, f;
	scanf_s("%d", &b);
	if (b == 1)
		printf("你选择的角色是Alice\n");
	else
		printf("你选择的角色是Bob\n");
	printf("请选择游戏模式(1为冒险模式,2为休闲模式)(1/2)>:\n");
	scanf_s("%d", &c);
	if (c == 2)
		printf("进入休闲模式，休息中……\n");
	else
		printf("进入冒险模式，冒险中……\n");
	printf("遇到敌人，是否迎战(1为放弃)？(0/1)>:\n");
	scanf_s("%d", &d);
	if (d)
		printf("逃跑成功\n");
	else
		printf("开始迎战\n");
	srand((unsigned int)time(NULL));
	printf("请选择你要使用的对抗敌人的方式\n");
	printf("说明:0为防御，1为普通攻击，2，3，4，5分别为特别技能\n");
	for (i = 1; i <= 8; i++)
	{
		f = rand() / 1000;
		scanf_s("%d", &e);
		switch (e)
		{
		case 0:printf("你进行了防御\n");
			printf("敌人对你造成了0点伤害\n"); break;
		case 1:printf("你进行了一次普通攻击，对敌人造成了%d的伤害\n", f);
			printf("敌人对你造成了0点伤害\n"); break;
		case 2:printf("你使用了'斩击'技能，对敌人造成了%d伤害\n", f);
			printf("敌人对你造成了0点伤害\n"); break;
		case 3:printf("你使用了'旋风斩'技能，对敌人造成了%d伤害\n", f);
			printf("敌人对你造成了0点伤害\n"); break;
		case 4:printf("你使用了'冲刺'技能，对敌人造成了%d伤害\n", f);
			printf("敌人对你造成了0点伤害\n"); break;
		case 5:printf("你使用了'大地爆破'技能，对敌人造成了%d伤害\n", f);
			printf("敌人对你造成了0点伤害\n"); break;
		}
	}
	system("cls");
	printf("敌人生命值为0，战斗胜利！\n");
	printf("是否继续冒险?(1/0)(0为放弃)>:");
	scanf_s("%d", &e);
	if (e == 0)
		printf("退出游戏中……\n");
	else
	{
		printf("继续冒险中……\n");
		Sleep(3000);
		printf("当日游戏时间即将超过国家规定游戏时间，正在为您退出游戏……\n");
		Sleep(3000);
		printf("感谢你的游玩！\n");
	}
	return 0;
}
