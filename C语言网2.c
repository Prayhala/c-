#include<stdio.h>
////��s=a+aa+...+aa...a
//#include<math.h>
//int main()
//{
//	int n = 0, a = 0, sum = 0, s = 0;
//	scanf_s("%d %d", &n, &a);
//	for (int i = 0; i < n; i++)
//	{
//		sum = sum + a * (int)pow(10, i);
//		s += sum;
//	}
//	printf("%d", s);
//	return 0;
//}

////��ȫ������abcd=(ab+cd)ƽ�����ʵ���λ��
//#include<math.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (int i = 1000; i <= 9999; i++)
//	{
//		a = i / 100;
//		b = i % 100;
//		if (i == pow(a + b, 2))
//			printf("%d ", i);
//	}
//	return 0;
//}

////��x=1,f(x)=10;x>1,f(x)=f(x-1)+2 �ݹ鹫ʽ�ĺ���ֵ
//int fx(int x)
//{
//	if (x == 1)
//		return 10;
//	else if(x>1)
//		return fx(x-1)+2;
//}
//int main()
//{
//	int x = 0;
//	scanf_s("%d", &x);
//	int count = fx(x);
//	printf("%d",count);
//	return 0;
//}

////��n*n�������Խ��ߵ�Ԫ��֮��
//int main()
//{
//	int n = 0,sum=0,i=0,j=0;
//	scanf_s("%d", &n);
//	//���鷨
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//			if (i == j || i + j == n-1)
//				sum += arr[i][j];
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

////��1-N������
//int main()
//{
//	int N = 0,flag=0;
//	scanf_s("%d", &N);
//	for (int i = 2; i <= N; i++)
//	{
//		flag = 0;
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				flag = 1;
//		}
//		if (flag == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

////����һֻ5Ǯ��ĸ��һֻ3Ǯ��С����ֻ1Ǯ����Ǯ�ټ�����ĸС����ֻ
//int main()
//{
//	int cock = 0, hen = 0, chicken = 0,money=100;
//	for (cock = 0; cock <= 20; cock++)
//	{
//		for (hen = 0; hen <= 33; hen++)
//		{
//			for (chicken = 0; chicken <= 100; chicken++)
//			{
//				if (5 * cock + 3 * hen + chicken == 100 && cock + hen + 3*chicken == 100)
//					printf("cock=%d,hen=%d,chicken=%d\n", cock, hen, 3*chicken);
//			}
//		}
//	}
//	return 0;
//}

////������s=1^3+...m^3>=nʱ��m����Сֵ
//int main()
//{
//	int s = 0, m = 0, n = 0;
//	scanf_s("%d", &n);
//	for (int i = 1;; i++)
//	{
//		s += (i*i*i);
//		if (s >= n)
//		{
//			m = i;
//			break;
//		}
//	}
//	printf("%d", m-1);
//	return 0;
//}

////��������һ������ƽ����β�����ڸ����������Ȼ�� ��25*25=625��25Ϊ������
//#include<math.h>
//int main()
//{
//	int count = 1,t=0,K=0;
//	for (int i = 1; i <= 200000; i++)
//	{
//		t = i;
//		K = i * i;
//		while (t)
//		{
//			count*=10;
//			t / 10;
//		}
//		if (K % count == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//һ�����100m���£�ÿ�η������ص�ԭ���߶ȵ�һ�룬���N����ع�����������
int main()
{
	int N = 0;
	scanf_s("%d", &N);
	double sum = 0, h = 100;
	for (int i = 1; i <= N; i++)
	{
		if (i == 1)
		{
			sum = 100;
		}
		else
		{
			sum += h;
			h /= 2;
		}
	}
	printf("%.4lf", sum);
	return 0;
}
