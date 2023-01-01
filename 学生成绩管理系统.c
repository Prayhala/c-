#include<stdio.h>
//�趨������
#define MAX 20
//����һ�����ѧ��������Ϣ�Ľṹ��
struct Message
{
	int num;//ѧ��
	char name[20];
	int Eng_score;
	int C_score;
	int Math_score;
	int PE_score;
	int Pol_score;
	int aver_score;
	int rank;
};
//����һ���ṹ�壬�ں�һ�����ѧ��������Ϣ�Ľṹ������
struct Student
{
	struct Message stu[MAX];
	int size;
};
//����һ���ṹ�����ڴ��ȫ�����ƽ����
struct Aver
{
	int Eng_aver;
	int C_aver;
	int Math_aver;
	int PE_aver;
	int Pol_aver;
};
//����һ���ṹ�����ڴ�Ÿ��Ʒ���������
struct Rank
{
	int E_rank;
	int C_rank;
	int M_rank;
	int PE_rank;
	int Po_rank;
};
//����˵�����
void menu()
{
	printf("*****************************************************\n");
	printf("****    1.ѧ����Ŀ����         2.�ɼ�ͳ��        ****\n");
	printf("****    3.������ͳ��           4.������ѧ��ɸѡ  ****\n");
	printf("****    5.ͳ���ŵ���           0.�˳�            ****\n");
	printf("*****************************************************\n");
}
//�����������ѧ����Ϣ�ĺ���
void InputInfo(struct Student* ps)
{
	FILE* pf = fopen("Info.txt", "w");
	//1.�����Ϣ,������ƽ���ɼ�
	printf("������ѧ��\n");
	scanf_s("%d", &(ps->stu[ps->size].num));
	printf("����������\n");
	scanf_s("%s", ps->stu[ps->size].name, 20);
	printf("������Ӣ��ɼ�\n");
	scanf_s("%d", &(ps->stu[ps->size].Eng_score));
	printf("������C���Գɼ�\n");
	scanf_s("%d", &(ps->stu[ps->size].C_score));
	printf("��������ѧ�ɼ�\n");
	scanf_s("%d", &(ps->stu[ps->size].Math_score));
	printf("�����������ɼ�\n");
	scanf_s("%d", &(ps->stu[ps->size].PE_score));
	printf("������˼����³ɼ�\n");
	scanf_s("%d", &(ps->stu[ps->size].Pol_score));
	printf("��ӳɹ�\n");
	ps->stu[ps->size].aver_score = (ps->stu[ps->size].Eng_score + ps->stu[ps->size].C_score +
		                         ps->stu[ps->size].Math_score + ps->stu[ps->size].PE_score +
		                         ps->stu[ps->size].Pol_score)/5;
	ps->size++;
	ps->stu[ps->size].rank++;
	//2.��ƽ���ָߵͶ�ѧ����������
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
	//3.���ѧ����Ϣ�������������������д���ļ���
	printf("%10s\t%5s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "ѧ��", "����", "Ӣ��", "C����", "��ѧ", "����", "˼�����","ƽ����", "����");
	fprintf(pf, "%10s\t%5s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n", "ѧ��", "����", "Ӣ��", "C����", "��ѧ", "����", "˼�����", "ƽ����", "����");
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
//��������ͳ��ȫ��ɼ��ĺ���
void SumScore(struct Student* ps, struct Aver* ret)
{
	FILE* pf = fopen("aver.txt", "w");
	//1.ͳ��ȫ�����ƽ���ɼ�������Ļ�ϴ�ӡ
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
	printf("%s\t%s\t%s\t%s\t%s\n", "Ӣ��ƽ����", "C����ƽ����", "��ѧƽ����", "����ƽ����", "˼�����ƽ����");
	printf("%-d\t\t%-d\t\t%-d\t\t%-d\t\t%d\n",ret->Eng_aver,ret->C_aver,ret->Math_aver,ret->PE_aver,ret->Pol_aver);
	//2.�����Ͻ��д���ļ�
	fprintf(pf, "%s\t%s\t%s\t%s\t%s\n", "Ӣ��ƽ����", "C����ƽ����", "��ѧƽ����", "����ƽ����", "˼�����ƽ����");
	fprintf(pf, "%-d\t\t%-d\t\t%-d\t\t%-d\t\t%d\n", ret->Eng_aver, ret->C_aver, ret->Math_aver, ret->PE_aver, ret->Pol_aver);
	fclose(pf);
	pf = NULL;
}
//��������ͳ�Ƹ��ֶ������ĺ���
void SumScorePart(struct Student* ps, struct Rank* ret)
{
	//ͳ�Ƹ���60����������
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
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "������", "Ӣ��", "C����", "��ѧ", "����","˼�����");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "<60", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//ͳ�Ƹ���60-70������
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
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "������", "Ӣ��", "C����", "��ѧ", "����", "˼�����");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "60-69", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//ͳ�Ƹ���70-80������
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
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "������", "Ӣ��", "C����", "��ѧ", "����", "˼�����");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "70-79", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//ͳ�Ƹ���80-90������
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
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "������", "Ӣ��", "C����", "��ѧ", "����", "˼�����");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", "80-89", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank); 
	ret->C_rank = ret->E_rank = ret->M_rank = ret->PE_rank = ret->Po_rank = 0;
	//ͳ�Ƹ���90����������
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
	printf("%s\t%s\t%s\t%s\t%s\t%s\n", "������", "Ӣ��", "C����", "��ѧ", "����", "˼�����");
	printf("%s\t%-d\t%-d\t%-d\t%-d\t%-d\n", ">90", ret->E_rank, ret->C_rank, ret->M_rank, ret->PE_rank, ret->Po_rank);
}
//ͳ�Ʋ�����ѧ������Ϣ
void SumLowerStu(struct Student* ps)
{
	int i = 0,count=0;
	//ͳ��Ӣ�ﲻ����ѧ����Ϣ
	printf("%s\t%s\t%s\t%s\n", "ѧ��", "����", "������γ�", "�ɼ�");
	for(i=0;i<ps->size;i++)
	{
		if (ps->stu[i].Eng_score < 60)
		{
			printf("%d\t%s\tӢ��\t\t%d\n", ps->stu[i].num,ps->stu[i].name,ps->stu[i].Eng_score);
		}
	}
	//ͳ��C���Բ�����ѧ����Ϣ
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].C_score < 60)
		{
			printf("%d\t%s\tC����\t\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].C_score);
		}
	}
	//ͳ����ѧ������ѧ����Ϣ
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].Math_score < 60)
		{
			printf("%d\t%s\t��ѧ\t\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].Math_score);
		}
	}
	//ͳ������������ѧ����Ϣ
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].PE_score < 60)
		{
			printf("%d\t%s\t����\t\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].PE_score);
		}
	}
	////ͳ��˼����²�����ѧ����Ϣ
	count = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->stu[i].Pol_score < 60)
		{
			printf("%d\t%s\t˼�����\t%d\n", ps->stu[i].num,ps->stu[i].name, ps->stu[i].Pol_score);
		}
	}
}
//ͳ������ѧ������Ϣ
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
			//ƽ���ɼ��������е�������ѧ��
			|| ((ps->stu[i].aver_score < 60) && (ps->stu[i].C_score == 100 ||
				ps->stu[i].Eng_score == 100 ||
				ps->stu[i].Math_score == 100 ||
				ps->stu[i].PE_score == 100 ||
				ps->stu[i].Pol_score == 100)))
		{
			printf("%s\t%s\n", "�ŵ���ѧ��", "����");
			printf("%d\t\t%s\n", ps->stu[i].num, ps->stu[i].name);
			count++;
		}
	}
	if (count == 0)
		printf("���ŵ���\n");
}
int main()
{
	//����һ���ṹ�����鲢��ʼ�����������ѧ����Ϣ
	struct Student con = { 0 };
	struct Aver ret = { 0 };
	struct Rank tmp = { 0 };
	//����һ��int�ͱ���������ѡ�����蹦��
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
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}