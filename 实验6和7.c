//1������sum����������a, b�����ĺͣ���������������������������sum��������͡�����ϸ�Ķ����³����ҳ����еĴ��󲢸�����
//#include <stdio.h>
//float sum(int ,int );//ʹ�ú���������
//int main()
//{
//	float x, y;
//	printf("%f\n", sum(x,y));//�������������()�ڴ��θ�ʽӦ�����ú������θ�ʽ��ͬ
//	return 0;
//}
//float sum(float a, float b)//�ú�����Ҫ�з���ֵ
//{
//	float c;
//	c = a + b;//����Ӧ�Ͳ�����ͬ
//	return;
//}
//1.��дһ��������ͳ���ַ������д�д��ĸ�ĸ���������ա�
//#include<stdio.h>
//int main()
//{
//	char string[100], Le;
//	int count(char s[]);
//	printf("input string:\n");
//	gets_s();        //�����ַ���
//	Le = count(string);            //����count����
//	printf("��д��ĸ��%d��", Le);
//	return 0;
//}
//int count(char s[])
//{
//	int sum = 0, i;
//	for (i = 0; s[i] != '\0'; i++)
//		if (s[i] >= 'A' && s[i] <= 'Z')
//			sum++;
//	return sum;
//}
//2.����yanghui�ܹ���������ʽ����һ����������Ρ�����ա�
//��ʾ����������ε��ص��ǵ�i����i�����֣�ÿ�еĵ�һ�������һ������Ϊ1������ÿһ�������õ�����һ�е�ͬһ�к�ǰһ����֮�͡�
#include <stdio.h>
#define N 10
int main()
{
	int i, j; int a[N][N] = {1};
	void yanghui(int a[][N]);      //����yanghui����
	yanghui(a);      //����yanghui����
	for (i = 0; i < N; i++)
	{
		for (j = 0; j<=i; j++)
			printf("%-4d", a[i][j]);
		printf("\n");
	}
	return 0;
}
void yanghui(int a[][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1; a[i][i] = 1;
	}
	for (i = 2; i < N; i++)
		for (j = 1; j <= i - 1; j++)
			a[i][j] = a[i-1][j]+a[i-1][j-1];
}
