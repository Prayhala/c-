//#include<stdio.h>
//int main()
//{
//	int i, a[10];
//	float average=0;
//	for (i = 0; i < 10; i++)
//		scanf_s("%d", &a[i]);
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", a[i - 1]);
//		if (i % 3 == 0)
//			printf("\n");
//		average = average + a[i - 1];
//	}
//	printf("average=%f\n", average / 10);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int i, j, m, n, x[3][4] = { 10,20,30,40,1,2,3,4,33,83,73,13 };
//	m = n = 0;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			if (x[m][n] < x[i][j])
//			{
//				m = i; n = j;
//			}
//	printf("x[m][n]=%d,m=%d,n=%d", x[m][n], m, n);
//	return 0;
//}
//��һ���ź�������飬Ҫ������һ�����󣬰�ԭ������Ĺ��ɽ������������У���������顣
//
//��ѡ�񷨶�10����������10��������scanf��������
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0,min=0;
//	printf("������ʮ����\n");
//	for (i = 0; i < 10; i++)
//		scanf_s("%d", &arr[i]);
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		min = i;
//		for (j = i+1; j < 10; j++)
//		{
//			if (arr[min] > arr[j])
//				min = j;
//		}
//		if (min != i)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = tmp;
//		}
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


//��һ��3��3����������Խ���Ԫ��֮�͡�
//#include<stdio.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0, j = 0;
//	int sum = 0;
//	printf("������3x3�����Ԫ��\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", &arr[i][j]);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//			if (j == 2)
//				printf("\n");
//			if (i==j||j+i==2)
//				sum += arr[i][j];
//		}
//	}
//	printf("�Խ���֮��Ϊ%d", sum);
//	return 0;
//}

//��һƪ���£�����3�����֣�ÿ����80���ַ���Ҫ��ֱ�ͳ�Ƴ�����Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ��ĸ�����
#include<stdio.h>
int main()
{
	char arr[3][80];
	int i = 0, j = 0;
	int acount = 0, bcount = 0, ccount = 0, dcount = 0, ecount = 0;
	for (i = 0; i < 3; i++)
	{
		gets_s(arr[i],80);
		for (j = 0; j<3; j++)
		{
			if ('A' <= arr[i][j] && arr[i][j] < 'Z')
				acount++;
			else if ('a' <= arr[i][j] && arr[i][j] < 'z')
				bcount++;
			else if ('0' <= arr[i][j] && arr[i][j] < '9')
				ccount++;
			else if (arr[i][j] ==' ')
				dcount++;
			else
				ecount++;
		}
	}
	printf("Ӣ�Ĵ�д��ĸ%d��,Сд��ĸ%d��,����%d��,�ո�%d���Լ������ַ�%d��", acount, bcount, ccount, dcount, ecount);
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	int i, j, m, n, x[3][4] = { 10,20,30,40,1,2,3,4,33,83,73,13 };//����i,j,m,nΪ����,����x����������
//	m = n = 0;                      //�������һ��Ԫ�ؿ�ʼ
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//			if (x[m][n] < x[i][j])
//			{
//				m = i; n = j;    //���������ֵ����Ӧ��Ԫ���±긽��m,n
//			}
//	printf("x[m][n]=%d,m=%d,n=%d", x[m][n], m, n);   //������ѭ����������������ӡ�������������±�
//	return 0;
//}

