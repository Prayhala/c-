#include<stdio.h>
//int main()
//{
//	char arr[10] = { "China" };
//	for (int i = 0; arr[i] != '\0'; i++)
//		putchar(arr[i]);
//	return 0;
//}
//int main()
//{
//	int a = 0,n=0; int sum = 0,tmp=0;
//	scanf_s("%d %d",&a,&n);
//	for (int i = 0; i <n; i++)
//	{
//		tmp = tmp * 10 + a;    //�������    ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//		sum += tmp;                      //���磺2 + 22 + 222 + 2222 + 22222
//	}
//	printf("%d",sum);
//	return 0;
//}
////ˮ�ɻ��� ��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������
//#include<math.h>
//int main()
//{
//	for (int i = 0; i < 999999; i++)
//	{
//		int count = 0;
//		int sum = 0, tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum +=pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };   //ʹ��ָ���ӡ��������
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", *(p + i));
//	return 0;
//}