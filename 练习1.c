#include<stdio.h>
//#define I 5
//#define J 5
//int he(int arr[I][J], int i, int j)
//{
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i == j || i + j == 4)
//				sum += arr[i][j];
//		}
//	}
//	return sum;
//}
//int ji(int arr[I][J], int i, int j)
//{
//	int result = 1;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (i % 2 == 0 && j % 2 == 0)
//				result *= arr[i][j];
//		}
//		}
//	return result;
//}
//int main()
//{
//	int arr[5][5] = { 0 };
//	int i = 0, j = 0;
//	printf("������25����\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf_s("%d",&arr[i][j]);
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	int ret = he(arr,5,5);
//	int result = ji(arr, 5, 5);
//	printf("��=%d\n��=%d\n",ret,result);
//	return 0;
//}
//#define num 4
//void init(int arr[num],int Num)
//{
//	for (int i = 0; i < Num; i++)
//		arr[num] = 0;
//}
//void print(int arr[num],int Num)
//{
//	for (int i = 0; i < Num; i++)
//		printf("%d", arr[i]);
//	printf("\n");
//}
//void reverse(int arr[num], int Num,int sz)
//{
//	int left = 0;
//	int right = sz;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[num] = { 0 };
//	int sz= sizeof(arr) / sizeof(arr[0]) - 1;
//	init(arr, num);
//	printf("����������Ԫ��\n");
//	for (int i = 0; i < num; i++)
//		scanf_s("%d",&arr[i]);  ��������Ԫ��
//	print(arr, num);
//	reverse(arr, num,sz);
//	print(arr, num);
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "helllo bit" };
//	char arr2[] = { "**********" };
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]);
//	while (left < right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];        ��������
//		left++;
//		right--;
//	}
//	for (int i = 0; i < sizeof(arr1) - 1; i++)
//	{
//		printf("%c",arr1[i]);
//}
//	return 0;
//}
//int number(int a, int b)
//{
//	int num = a | b;      
//	int count = 0;
//	for (int i = 0; i < 32; i++) 
//	{
//		int j=num& (1 << i);
//		if (j % 2 == 0&&j!=0)
//			count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int a = 0, b = 0;
//	printf("������������(�Զ��Ÿ���)\n");     //���������������в�ͬλ�ĸ���
//	scanf_s("%d,%d",&a,&b);
//	int ret = number(a, b);
//	printf("%d", ret);
//	return 0;
//}
	//int calc_diff_bit(int m, int n)
	//{
	//	int tmp = m ^ n;
	//	int count = 0;
	//	while (tmp)
	//	{
	//		tmp = tmp & (tmp - 1);
	//		count++;
	//	}
	//	return count;
	//}                                               //���������������в�ͬλ�ĸ���
	//int main()
	//{
	//	int m, n;
	//	while (scanf_s("%d %d", &m, &n) == 2)
	//	{
	//		printf("%d\n", calc_diff_bit(m, n));
	//	}
	//	return 0;
	//}
//void print(int a)
//{
//	int i = 0;
//	printf("����λΪ��\n");
//	for (i = 0; i < 31; i += 2)
//		printf("%d ", (a >> i) & 1);//25 00011001 101 01
//	printf("\n");
//	printf("ż��λΪ:\n");
//	for (i = 1; i <32; i += 2)
//		printf("%d ", (a >> i)&1);
//}
//int main()
//{
//	int a = 0;                                         //��ӡ���������Ƶ�����λ��ż��wei  
//	printf("������һ������\n");
//	scanf_s("%d",&a);//
//	print(a);
//	return 0;
//}
//int num(int a)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((a>>i) &1 == 1)       //����һ
//			count++;
//	}
//	return count;
//}
//int num(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)   //�����������ܼ��㸺��
//			count++;
//		a /= 2;
//	}
//	return count;
//}
//int num(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);  //�����������
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("������һ����\n");//ͳ�ƶ�������1�ĸ���
//	scanf_s("%d", &a);
//	int ret = num(a);
//	printf("%d",ret);
//	return 0;
//}
//void swap(int* a,int* b)
//{
//	int tmp = *a;
//	*a = *b;     //�˷����Զ��庯��ʱ��������ʱ����
//	*b = tmp;
//}
//int main()
//{
//	int a = 0, b = 0;
//	printf("���������������Զ��Ÿ�����\n");   //����������������������ʱ������
//	scanf_s("%d,%d",&a,&b);
//	/*swap(&a, &b);*/
//	/*a = a + b;
//	b = a - b;  //�������ֵ��������ʱ�ᵼ�½�������ֵ��׼ȷ
//	a = a-b;*/
//	a = a ^ b;  //6,3 a=00000110,  b=00000011,a=00000111,b=00000111
//	b = a ^ b;  //��÷���
//	a = a ^ b;
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}
int main()
{
	int a = 1, b = 2;
	a = a ^ b;//3
	printf("%d", a ^ b);
	return 0;
}