////1.以下程序的功能是：由终端键盘输入字符，存放到文件fname中，用“!”结束输入。请填空。
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp;
//	char ch, fname[10];
//	printf("请输入文件名:");
//	gets_s(fname,10);
//	if ((fp = fopen(fname,"w")) == NULL)
//	{
//		printf("不能打开文件！\n");
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

////2.以下程序的功能是：打开第1题所保存的文件，将文件内容输出到屏幕上，并统计文件中数字字符的个数。请填空。
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	FILE* fp; int count = 0;
//	char ch, fname[10];
//	printf("请输入文件名:");
//	gets_s(fname,10);
//	if ((fp = fopen(fname,"r")) == NULL)
//	{
//		printf("不能打开文件！\n"); 
//		exit(0);
//	}
//	printf("文件中的内容为：\n");
//	ch = fgetc(fp);
//	while (ch!=EOF)
//	{
//		putchar(ch);
//		ch = fgetc(fp);
//		if (ch >= '0' && ch <= '9')
//			count++;
//	}
//	printf("\n数字字符的个数为：%d\n", count);
//	fclose(fp);
//	return 0;
//}

////3.以下程序的功能是：输入4名学生的姓名、学号、年龄并存入文件stu_list.dat中。请填空。
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
//		printf("不能打开文件！\n");
//		return;
//	}
//	for (i = 0; i < SIZE; i++)
//		if (fwrite(&stud[i],sizeof(stud[i]), 1, fp) != 1)
//			printf("写文件出错！\n");
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

////4.在一个文件中保存许多姓名，每个姓名占一行。 编写程序，从键盘输入该文件的文件名和一个姓名，判断该姓名在文件中是否存在。
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char buf[10] = { "fname.txt"}, name[5] = {"haha"};
//	printf("请输入文件名\n");
//	scanf_s("%s",buf,10);
//	printf("和要查找的姓名\n");
//	scanf_s("%s",name,5);
//	FILE* pf = fopen(buf, "r");
//	if (pf == NULL)
//		return 0;
//	fgets(buf,5,pf);
//	while(1)
//	{
//		if (strcmp(buf, name) == 0)
//		{
//			printf("%s这个姓名存在", name);
//			break;
//		}
//		fgets(buf, 5, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//5.有5个学生的学号、姓名、三门课程的成绩，从键盘输入以上数据，计算出平均成绩，
//将学号、姓名、三门课程成绩、平均成绩都存放在磁盘文件stu_score。
//设5名学生的学号、姓名、三门课程成绩如下：
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
