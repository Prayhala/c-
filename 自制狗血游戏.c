#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int main()
{
	int zh = 0;
	int password = 0;
	int i = 1, a = 1;
	printf("            ð��(�޵а�)           \n");
	printf("�˺�:");
	for (a = 0; a < 3; a++)
	{
		scanf_s("%d", &zh);
		if (zh == 359767614)
		{
			printf("������ȷ\n");
			break;
		}
		else
			printf("�����������������\n");
	}
	if (a == 3)
	{
		printf("�˺�����Ѵ����Σ��˳���Ϸ\n");
		return 0;
	}
	printf("����:");
	for (i = 1; i <= 3; i++)
	{
		scanf_s("%d", &password);
		if (password == 362362)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�����������������\n");
		if (i == 3)
		{
			printf("��������Ѵ����Σ��Զ��˳���Ϸ\n");
			return 0;
		}
	}

	if (i == 3)
		printf("��������˳�����\n");
	Sleep(1000);
	system("cls");
	printf("��ѡ���ɫ>(1/2)>:");
	int b, c, d, e, f;
	scanf_s("%d", &b);
	if (b == 1)
		printf("��ѡ��Ľ�ɫ��Alice\n");
	else
		printf("��ѡ��Ľ�ɫ��Bob\n");
	printf("��ѡ����Ϸģʽ(1Ϊð��ģʽ,2Ϊ����ģʽ)(1/2)>:\n");
	scanf_s("%d", &c);
	if (c == 2)
		printf("��������ģʽ����Ϣ�С���\n");
	else
		printf("����ð��ģʽ��ð���С���\n");
	printf("�������ˣ��Ƿ�ӭս(1Ϊ����)��(0/1)>:\n");
	scanf_s("%d", &d);
	if (d)
		printf("���ܳɹ�\n");
	else
		printf("��ʼӭս\n");
	srand((unsigned int)time(NULL));
	printf("��ѡ����Ҫʹ�õĶԿ����˵ķ�ʽ\n");
	printf("˵��:0Ϊ������1Ϊ��ͨ������2��3��4��5�ֱ�Ϊ�ر���\n");
	for (i = 1; i <= 8; i++)
	{
		f = rand() / 1000;
		scanf_s("%d", &e);
		switch (e)
		{
		case 0:printf("������˷���\n");
			printf("���˶��������0���˺�\n"); break;
		case 1:printf("�������һ����ͨ�������Ե��������%d���˺�\n", f);
			printf("���˶��������0���˺�\n"); break;
		case 2:printf("��ʹ����'ն��'���ܣ��Ե��������%d�˺�\n", f);
			printf("���˶��������0���˺�\n"); break;
		case 3:printf("��ʹ����'����ն'���ܣ��Ե��������%d�˺�\n", f);
			printf("���˶��������0���˺�\n"); break;
		case 4:printf("��ʹ����'���'���ܣ��Ե��������%d�˺�\n", f);
			printf("���˶��������0���˺�\n"); break;
		case 5:printf("��ʹ����'��ر���'���ܣ��Ե��������%d�˺�\n", f);
			printf("���˶��������0���˺�\n"); break;
		}
	}
	system("cls");
	printf("��������ֵΪ0��ս��ʤ����\n");
	printf("�Ƿ����ð��?(1/0)(0Ϊ����)>:");
	scanf_s("%d", &e);
	if (e == 0)
		printf("�˳���Ϸ�С���\n");
	else
	{
		printf("����ð���С���\n");
		Sleep(3000);
		printf("������Ϸʱ�伴���������ҹ涨��Ϸʱ�䣬����Ϊ���˳���Ϸ����\n");
		Sleep(3000);
		printf("��л������棡\n");
	}
	return 0;
}
