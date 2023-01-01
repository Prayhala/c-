#include<stdio.h>
//设定总人数
#define MAX 20
//定义一个存放学生各类信息的结构体
struct Message
{
	int num;//学号
	char name[20];
	int Eng_score;
	int C_score;
	int Math_score;
	int PE_score;
	int Pol_score;
	int aver_score;
	int rank;
};
//定义一个结构体，内含一个存放学生各类信息的结构体数组
struct Student
{
	struct Message stu[MAX];
	int size;
};
//定义一个结构体用于存放全班各科平均分
struct Aver
{
	int Eng_aver;
	int C_aver;
	int Math_aver;
	int PE_aver;
	int Pol_aver;
};
//定义一个结构体用于存放各科分数段人数
struct Rank
{
	int E_rank;
	int C_rank;
	int M_rank;
	int PE_rank;
	int Po_rank;
};
//定义菜单函数
void menu()
{
	printf("*****************************************************\n");
	printf("****    1.学生条目输入         2.成绩统计        ****\n");
	printf("****    3.分数段统计           4.不及格学生筛选  ****\n");
	printf("****    5.统计优等生           0.退出            ****\n");
	printf("*****************************************************\n");
}
//定义用于添加学生信息的函数
void InputInfo(struct Student* ps)
{
	FILE* pf = fopen("Info.txt", "w");
	//1.添加信息,并计算平均成绩
	printf("请输入学号\n");
	scanf_s("%d", &(ps->stu[ps->size].num));
	printf("请输入名字\n");
	scanf_s("%s", ps->stu[ps->size].name, 20);
	printf("请输入英语成绩\n");
	scanf_s("%d", &(ps->stu[ps->size].Eng_score));
	printf("请输入C语言成绩\n");
	scanf_s("%d", &(ps->stu[ps->size].C_score));
	printf("请输入数学成绩\n");
	scanf_s("%d", &(ps->stu[ps->size].Math_score));
	printf("请输入体育成绩\n");
	scanf_s("%d", &(ps->stu[ps->size].PE_score));
	printf("请输入思想道德成绩\n");
	scanf_s("%d", &(ps->stu[ps->size].Pol_score));
	printf("添加成功\n");
	ps->stu[ps->size].aver_score = (ps->stu[ps->size].Eng_score + ps->stu[ps->size].C_score +
		                         ps->stu[ps->size].Math_score + ps->stu[ps->size].PE_score +
		                         ps->stu[ps->size].Pol_score)/5;
	ps->size++;
	ps->stu[ps->size].rank++;
	//2.按平均分高低对学生进行排名
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		
			if (ps->stu[i].aver_score <= ps->stu[ps->size-1].aver_score)
			{
				struct Message stu = ps->stu[ps->size-1];
				int j = 0;
				for (j = ps->size; j > i; j--)
				{
					ps->stu[j] = ps->stu[j - 1];
				}
				ps->stu[i] = stu;
			}
	}
	//3.输出学生信息和排名并将输入的数据写入文件中
	printf("%10s\t%5s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "学号", "名字", "英语", "C语言", "数学", "体育", "思想道德","平均分", "名次");
	fprintf(pf, "%10s\t%5s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "学号", "名字", "英语", "C语言", "数学", "体育", "思想道德", "平均分", "名次");
	for (i = 0; i < ps->size; i++)
	{
		int j = i;
		if (j >= 1 && ps->stu[j].aver_score == ps->stu[j - 1].aver_score)
		{
			j = i - 1;
		}
		printf("%-10d\t%-5s\t%-d\t%-d\t%-d\t%-d\t%-d\t\t%-d\t%-d\n",
			ps->stu[i].num,
			ps->stu[i].name,
			ps->stu[i].Eng_score,
			ps->stu[i].C_score,
			ps->stu[i].Math_score,
			ps->stu[i].PE_score,
			ps->stu[i].Pol_score,
			ps->stu[i].aver_score,
			j + 1
		);
		fprintf(pf, "%-10d\t%-5s\t%-d\t%-d\t%-d\t%-d\t%-d\t\t%-d\t\t%-d\n",
			ps->stu[i].num,
			ps->stu[i].name,
			ps->stu[i].Eng_score,
			ps->stu[i].C_score,
			ps->stu[i].Math_score,
			ps->stu[i].PE_score,
			ps->stu[i].Pol_score,
			ps->stu[i].aver_score,
			j + 1);
	}
	fclose(pf);
	pf = NULL;
}
//定义用于统计全班成绩的函数
void SumScore(struct Student* ps, struct Aver* ret)
{
	FILE* pf = fopen("aver.txt", "w");
	//1.统计全班各科平均成绩并在屏幕上打印
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ret->Eng_aver += ps->stu[i].Eng_score;
		ret->C_aver += ps->stu[i].C_score;
		ret->Math_aver += ps->stu[i].Math_score;
		ret->PE_aver += ps->stu[i].PE_score;
		ret->Pol_aver += ps->stu[i].Pol_score;
	}
	ret->Eng_aver /= ps->size; ret->C_aver /= ps->size; ret->Math_aver /= ps->size; ret->PE_aver /= ps->size; ret->Pol_aver /= ps->size;
	printf("%s\t%s\t%s\t%s\t%s\n", "英语平均分", "C语言平均分", "数学平均分", "体育平均分", "思想道德平均分");
	printf("%-d\t\t%-d\t\t%-d\t\t%-d\t\t%d\n",ret->Eng_aver,ret->C_aver,ret->Math_aver,ret->PE_aver,ret->Pol_aver);
	//2.将以上结果写入文件
	fprintf(pf, "%s\t%s\t%s\t%s\t%s\n", "英语平均分", "C语言平均分", "数学平均分", "体育平均分", "思想道德平均分");
	fprintf(pf, "%-d\t\t%-d\t\t%-d\t\t%-d\t\t%d\n", ret->Eng_aver, ret->C_aver, ret->Math_aver, ret->PE_aver, ret->Pol_aver);
	fclose(pf);
	pf = NULL;
}
//定义用于统计各分段人数的函数
void SumScorePart(struct Student* ps, struct Rank* ret)
{
	//统计各科60分以下人数
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].Eng_score < 60)
			ret->E_rank++;
		if (ps->stu[i].C_score < 60)
			ret->C_rank++;
		if (ps->stu[i].Math_score < 60)
			ret->M_rank++;
		if (ps->stu[i].PE_score < 60)
			ret->PE_rank++;
		if (ps->stu[i].Pol_score < 60)
			ret->Po_rank++;
	}
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "分数段", "英语", "C语言", "数学", "体育","思想道德");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "<60", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//统计各科60-70分人数
	for (i = 0; i < ps->size; i++)
	{
		if (60<=ps->stu[i].Eng_score&& ps->stu[i].Eng_score < 70)
			ret->E_rank++;
		if (60<=ps->stu[i].C_score&& ps->stu[i].C_score < 70)
			ret->C_rank++;
		if (60<=ps->stu[i].Math_score&& ps->stu[i].Math_score < 70)
			ret->M_rank++;
		if (60<=ps->stu[i].PE_score&& ps->stu[i].PE_score < 70)
			ret->PE_rank++;
		if (60<=ps->stu[i].Pol_score&& ps->stu[i].Pol_score < 70)
			ret->Po_rank++;
	}
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "分数段", "英语", "C语言", "数学", "体育", "思想道德");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "60-69", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//统计各科70-80分人数
	for (i = 0; i < ps->size; i++)
	{
		if (70 <= ps->stu[i].Eng_score&& ps->stu[i].Eng_score < 80)
			ret->E_rank++;
		if (70 <= ps->stu[i].C_score&& ps->stu[i].C_score < 80)
			ret->C_rank++;
		if (70 <= ps->stu[i].Math_score&& ps->stu[i].Math_score < 80)
			ret->M_rank++;
		if (70 <= ps->stu[i].PE_score&& ps->stu[i].PE_score < 80)
			ret->PE_rank++;
		if (70 <= ps->stu[i].Pol_score&& ps->stu[i].Pol_score < 80)
			ret->Po_rank++;
	}
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "分数段", "英语", "C语言", "数学", "体育", "思想道德");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "70-79", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//统计各科80-90分人数
	for (i = 0; i < ps->size; i++)
	{
		if (80 <= ps->stu[i].Eng_score&& ps->stu[i].Eng_score < 90)
			ret->E_rank++;
		if (80 <= ps->stu[i].C_score&& ps->stu[i].C_score < 90)
			ret->C_rank++;
		if (80 <= ps->stu[i].Math_score&& ps->stu[i].Math_score < 90)
			ret->M_rank++;
		if (80 <= ps->stu[i].PE_score&& ps->stu[i].PE_score < 90)
			ret->PE_rank++;
		if (80 <= ps->stu[i].Pol_score&& ps->stu[i].Pol_score < 90)
			ret->Po_rank++;
	}
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "分数段", "英语", "C语言", "数学", "体育", "思想道德");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "80-89", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank); 
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//统计各科90分以上人数
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].Eng_score >90)
			ret->E_rank++;
		if (ps->stu[i].C_score >90)
			ret->C_rank++;
		if (ps->stu[i].Math_score >90)
			ret->M_rank++;
		if (ps->stu[i].PE_score >90)
			ret->PE_rank++;
		if (ps->stu[i].Pol_score >90)
			ret->Po_rank++;
	}
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "分数段", "英语", "C语言", "数学", "体育", "思想道德");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", ">90", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
}
//统计不及格学生的信息
void SumLowerStu(struct Student* ps)
{
	int i = 0,count=0;
	//统计英语不及格学生信息
	printf("%s\t%s\t%s\t%s\n", "学号", "姓名", "不及格课程", "成绩");
	for(i=0;i<ps->size;i++)
	{
		if (ps->stu[i].Eng_score < 60)
		{
			printf("%d\t%s\t英语\t\t%d\n", ps->stu[i].num,ps->stu[i].name,ps->stu[i].Eng_score);
		}
	}
	//统计C语言不及格学生信息
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].C_score < 60)
		{
			printf("%d\t%s\tC语言\t\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].C_score);
		}
	}
	//统计数学不及格学生信息
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].Math_score < 60)
		{
			printf("%d\t%s\t数学\t\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].Math_score);
		}
	}
	//统计体育不及格学生信息
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].PE_score < 60)
		{
			printf("%d\t%s\t体育\t\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].PE_score);
		}
	}
	////统计思想道德不及格学生信息
	count = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].Pol_score < 60)
		{
			printf("%d\t%s\t思想道德\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].Pol_score);
		}
	}
}
//统计优秀学生的信息
void ExceStudent(struct Student* ps)
{
	int i = 0,count=0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].aver_score >= 80 || (60 <= ps->stu[i].aver_score < 80 && (ps->stu[i].C_score >= 90 ||
			ps->stu[i].Eng_score >= 90 ||
			ps->stu[i].Math_score >= 90 ||
			ps->stu[i].PE_score >= 90 ||
			ps->stu[i].Pol_score >= 90))
			//平均成绩不及格但有单科满分学生
			|| ((ps->stu[i].aver_score < 60) && (ps->stu[i].C_score == 100 ||
				ps->stu[i].Eng_score == 100 ||
				ps->stu[i].Math_score == 100 ||
				ps->stu[i].PE_score == 100 ||
				ps->stu[i].Pol_score == 100)))
		{
			printf("%s\t%s\n", "优等生学号", "姓名");
			printf("%d\t\t%s\n", ps->stu[i].num, ps->stu[i].name);
			count++;
		}
	}
	if (count == 0)
		printf("无优等生\n");
}
int main()
{
	//定义一个结构体数组并初始化，用来存放学生信息
	struct Student con = { 0 };
	struct Aver ret = { 0 };
	struct Rank tmp = { 0 };
	//定义一个int型变量，用来选择所需功能
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			InputInfo(&con);
			break;
		case 2:
			SumScore(&con,&ret);
			break;
		case 3:
			SumScorePart(&con,&tmp);
			break;
		case 4:
			SumLowerStu(&con);
			break;
		case 5:
			ExceStudent(&con);
			break;
		case 0:
			printf("退出成功\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}