////1.���³���Ĺ����ǣ����ն˼��������ַ�����ŵ��ļ�fname�У��á�!���������롣����ա�
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp;
//	char ch, fname[10];
//	printf("�������ļ���:");
//	gets_s(fname,10);
//	if ((fp = fopen(fname,"w")) == NULL)
//	{
//		printf("���ܴ��ļ���\n");
//		exit(0);
//	}
//	ch = getchar();
//	while (ch != '!')
//	{
//		fputc(ch, fp);
//		ch = getchar();
//	}
//	fclose(fp);
//	return 0;
//}

////2.���³���Ĺ����ǣ��򿪵�1����������ļ������ļ������������Ļ�ϣ���ͳ���ļ��������ַ��ĸ���������ա�
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp; int count = 0;
//	char ch, fname[10];
//	printf("�������ļ���:");
//	gets_s(fname,10);
//	if ((fp = fopen(fname,"r")) == NULL)
//	{
//		printf("���ܴ��ļ���\n"); 
//		exit(0);
//	}
//	printf("�ļ��е�����Ϊ��\n");
//	ch = fgetc(fp);
//	while (ch!=EOF)
//	{
//		putchar(ch);
//		ch = fgetc(fp);
//		if (ch >= '0' && ch <= '9')
//			count++;
//	}
//	printf("\n�����ַ��ĸ���Ϊ��%d\n", count);
//	fclose(fp);
//	return 0;
//}

////3.���³���Ĺ����ǣ�����4��ѧ����������ѧ�š����䲢�����ļ�stu_list.dat�С�����ա�
//#include <stdio.h>
//#define SIZE 4
//struct student_type
//{
//	char name[10];
//	int num;
//	int age;
//}stud[SIZE];
//void save()
//{
//	FILE* fp;
//	int i;
//	if ((fp = fopen("stu_list.dat", "wb")) == NULL)
//	{
//		printf("���ܴ��ļ���\n");
//		return;
//	}
//	for (i = 0; i < SIZE; i++)
//		if (fwrite(&stud[i],sizeof(stud[i]), 1, fp) != 1)
//			printf("д�ļ�����\n");
//	fclose(fp);
//}
//
//int main()
//{
//	int i;
//	for (i = 0; i < SIZE; i++)
//		scanf_s("%s,%d,%d", stud[i].name,10,&stud[i].num,&stud[i].age);
//	save();
//	return 0;
//}

////4.��һ���ļ��б������������ÿ������ռһ�С� ��д���򣬴Ӽ���������ļ����ļ�����һ���������жϸ��������ļ����Ƿ���ڡ�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char buf[10] = { "fname.txt"}, name[5] = {"haha"};
//	printf("�������ļ���\n");
//	scanf_s("%s",buf,10);
//	printf("��Ҫ���ҵ�����\n");
//	scanf_s("%s",name,5);
//	FILE* pf = fopen(buf, "r");
//	if (pf == NULL)
//		return 0;
//	fgets(buf,5,pf);
//	while(1)
//	{
//		if (strcmp(buf, name) == 0)
//		{
//			printf("%s�����������", name);
//			break;
//		}
//		fgets(buf, 5, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//5.��5��ѧ����ѧ�š����������ſγ̵ĳɼ����Ӽ��������������ݣ������ƽ���ɼ���
//��ѧ�š����������ſγ̳ɼ���ƽ���ɼ�������ڴ����ļ�stu_score��
//��5��ѧ����ѧ�š����������ſγ̳ɼ����£�
//1001    Cheng   90, 89, 80
//1002    Li      80, 80, 65
//1003    Zhang   70, 90, 80
//1004    Wang    85, 80, 88
//1005    Zhao    70, 75, 68
#include<stdio.h>
#define SIZE 5
struct message
{
	int num;
	char name[10];
	int score1;
	int score2;
	int score3;
	int av_score;
}stu[SIZE];
int main()
{
	int i = 0;
	FILE* pf = fopen("stu_score","w");
	for (i = 0; i < SIZE; i++)
	{
		scanf_s("%s", stu[i].name, 10);
		scanf_s("%d,%d,%d,%d", &stu[i].num,  &stu[i].score1, &stu[i].score2, &stu[i].score3);
		stu[i].av_score = (stu[i].score1+stu[i].score2+stu[i].score3)/3;
		fprintf(pf,"%d %s %d %d %d %d\n",stu[i].num,stu[i].name,stu[i].score1,stu[i].score2,stu[i].score3, stu[i].av_score);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}
