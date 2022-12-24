////1．写出下面程序的预期结果。上机输入并运行下面程序，验证你的结果并分析。
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
////2. 以下程序用来按学生姓名查询其排名和平均成绩。查询可连续进行，直到输入0时结束。请填空。
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
//		printf("请输入姓名:");
//		scanf("%s", str);
//		for (i = 0; i < NUM; i++)
//			if (strcmp(str, stu[i].name)==0)                  //如果找到
//			{
//				printf("name:%s\n", stu[i].name);      //输出姓名 
//				printf("rank:%d\n", stu[i].rank);      //输出名次
//				printf("score:%5.1f\n", stu[i].score);     //输出成绩
//			}
//		if (i >= NUM) printf("Not find\n");
//	} while (strcmp(str, "0") != 0);
//	return 0;
//}
////3.函数findbook的功能是：在有M个元素的结构体数组中查找名为name的书。若找到，函数返回数组下标，否则，函数返回一1。
////要求：在main函数中输入book数组的信息和要查找的书名，如果找到，则输出该书的相关信息（id, name, price）；
////如果没有找到，则输出“no find”，请完成main函数的编写。
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
//4.编写程序，定义一个复数的结构体类型，定义两个结构体的变量分别表示两个复数，
//从键盘输入复数的实部和虚部，输出这两个复数的和。
#include<stdio.h>
struct complex
{
	float a;//实部
	float b;//虚部
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
