#include<stdio.h>
////����t=1+...+1/n��ֵ
//int main()
//{
//	double n = 0, t = 0;
//	scanf_s("%lf", &n);
//	for (double i = 1; i <= n; i++)
//	{
//		t += 1 / i;
//	}
//	printf("%.6lf", t);
//	return 0;
//}

//������δ����
////���������Ҹ���3�����ӣ�9�����ӱ����ܲ��������ܷ���ȣ���ͬ���Σ���һ9�֣��ڶ�8�֣��Դ�����
////Ҳû��һ���������������ӵ��������ʣ���һ������ң��ڶ��������ҵĺ��ӣ������һ����˭�ҵ�
//int main()
//{
//	int Lsum = 9, Wsum = 8, Zsum = 0, n = 7;
//	int Lflag = 0, Wflag = 1, Zflag = 0;
//	int Lch = 2, Wch = 2, Zch = 3;
//	for(int i=0;;i++)
//	{
//		while (n)
//		{
//			if (Lflag == 0 && Lch)
//			{
//				Lsum += n;
//				Lflag = 1;
//				Wflag = 0;
//				Zflag = 0;
//				Lch--;
//				n--;
//				continue;
//			}
//			if (Wflag == 0 && Wch)
//			{
//				Wsum += n;
//				Wflag = 1;
//				Zflag = 0;
//				Lflag = 0;
//				Wch--;
//				n--;
//				continue;
//			}
//			if (Zflag == 0 && Zch)
//			{
//				Zsum += n;
//				Zflag = 1;
//				Wflag = 0;
//				Lflag = 0;
//				Zch--;
//				n--;
//				continue;
//			}
//		}
//		if (Zsum == Lsum == Wsum)
//			break;
//	}
//	if (Zflag == 1)
//		printf("Z");
//	else if (Wflag == 1)
//		printf("W");
//	else
//		printf("L");
//	return 0;
//}

////����������Ʊ�����������Ʊ��������һ�Ż������ţ���������Ϸ���
//int main()
//{
//	int p3 = 4, p5 = 3, i = 0, count = 0;
//	for (int i = 1; i <= 7; i++)
//	{
//		for (int m = 0; m <= p3; m++)
//		{
//			for (int n = 0; n <= p5; n++)
//			{
//				if (m + n == i)
//					count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

////145=1!+4!+5!,��145Ϊ��λ�׳˺�������n<100000�ж��ٸ��׳˺���
//int jc(int i)
//{
//	int sum1 = 1;
//	for (int j = 1; j <= i; j++)
//		sum1 *= j;
//	return sum1;
//}
//int sumjc(int i)
//{
//	int sum = 0,j=i;
//	while (j)
//	{
//		sum += jc(j % 10);
//		j /= 10;
//	}
//	if (sum == i)
//		return 1;
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 100000; i++)
//	{
//		if (sumjc(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//407=4^3+0^3+7^3,407Ϊ��ķ˹����������1~1000�����������
int judge(int i)
{
	int j = i, sum = 0;
	while (j)
	{
		sum += (j % 10) * (j % 10) * (j % 10);
		j /= 10;
	}
	if (sum == i)
		return 1;
	return 0;
}
int main()
{
	for (int i = 2; i < 1000; i++)
	{
		if (judge(i))
			printf("%d ", i);
	}
	return 0;
}