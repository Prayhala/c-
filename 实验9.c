////1��д����������Ԥ�ڽ�����ϻ����벢�������������֤��Ľ����������
//#include <stdio.h>
//struct n
//{
//	int x;
//	char c;
//};
//int main()
//{
//	void func(struct n);
//	struct n a = { 10,'x' };
//	func(a);
//	printf("%d,%c", a.x, a.c);
//	return 0;
//}
//void func(struct n b)
//{
//	b.x = 20;
//	b.c = 'y';
//}
////2. ���³���������ѧ��������ѯ��������ƽ���ɼ�����ѯ���������У�ֱ������0ʱ����������ա�
//#include <stdio.h>
//#include <string.h>
//#define NUM 4
//struct student
//{
//	int rank;
//	char name[20];
//	float score;
//};
//struct student stu[] = { 3,"Tom",89.5,4,"Mary",68,1,"Hebe",96.5,2,"Jim",92 };
//int main()
//{
//	char str[10]; int i;
//	do
//	{
//		printf("����������:");
//		scanf("%s", str);
//		for (i = 0; i < NUM; i++)
//			if (strcmp(str, stu[i].name)==0)                  //����ҵ�
//			{
//				printf("name:%s\n", stu[i].name);      //������� 
//				printf("rank:%d\n", stu[i].rank);      //�������
//				printf("score:%5.1f\n", stu[i].score);     //����ɼ�
//			}
//		if (i >= NUM) printf("Not find\n");
//	} while (strcmp(str, "0") != 0);
//	return 0;
//}
////3.����findbook�Ĺ����ǣ�����M��Ԫ�صĽṹ�������в�����Ϊname���顣���ҵ����������������±꣬���򣬺�������һ1��
////Ҫ����main����������book�������Ϣ��Ҫ���ҵ�����������ҵ������������������Ϣ��id, name, price����
////���û���ҵ����������no find���������main�����ı�д��
//#include <stdio.h>
//#include <string.h>
//#define M 5
//struct data
//{
//	int id;
//	char name[20];
//	float price;
//}book[M];
//int findbook(struct data s[], char name[])
//{
//	int i;
//	for (i = 0; i < M; i++)
//	{
//		if (strcmp(s[i].name, name) == 0)
//			return i;
//	}
//	return -1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < M; i++)
//	{
//		scanf_s("%d",&book[i].id);
//		scanf_s("%s",book[i].name,20);
//		scanf_s("%f",&book[i].price);
//	}
//	printf("\n");
//	int ret = findbook(book, "name");
//	if (ret == -1)
//		printf("no find\n");
//	else
//		printf("%d %s %f",book[ret].id,book[ret].name,book[ret].price);
//}
// 
//4.��д���򣬶���һ�������Ľṹ�����ͣ����������ṹ��ı����ֱ��ʾ����������
//�Ӽ������븴����ʵ�����鲿����������������ĺ͡�
#include<stdio.h>
struct complex
{
	float a;//ʵ��
	float b;//�鲿
};
struct complex Add(struct complex c1, struct complex c2)
{
	struct complex add = { 0 };
	add.a = c1.a + c2.a;
	add.b = c1.b + c2.b;
	return add;
}
int main()
{
	struct complex c1 = { 0 };
	struct complex c2 = { 0 };
	struct complex c3 = { 0 };
	scanf_s("%f %f",&c1.a,&c1.b);
	scanf_s("%f %f", &c2.a, &c2.b);
	c3=Add(c1, c2);
	printf("%f+%fi+%f+%fi=%f+%fi",c1.a,c1.b,c2.a,c2.b,c3.a,c3.b);
	return 0;
}
