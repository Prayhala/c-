#include<stdio.h>
//����һ��ָ����10��Ԫ�ص������ָ��--����ָ��--   int (*p)[10]
// ÿ��Ԫ����һ������ָ��--  int (*(*p)[])()
// �ú����ķ���ֵ��int��������int*  --int *(*p[])(int*)
// int (*(*p)[10])(int *)

//����һ������ָ��   --  (*F)()
// ָ��ĺ���������int�β�--  (*F)(int,int)
// ���ҷ���һ������ָ�뷵�ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ���
//int (*(*F)(int,int))(int)

////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 =AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
//int main()
//{
//
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include<string.h>
void LeftRound(char arr[],int n)
{
	int left = 0;
	int right = strlen(arr)-1;
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		tmp = arr[0];
		for (int j = 0; j < right; j++)
			arr[j] = arr[j + 1];
		arr[right] = tmp;
	}
}
int main()
{
	int n = 0;
	char arr[] = { "ABCDEF" };
	printf("%s", arr);
	printf("����������Ҫ��ת���ַ���\n");
	scanf_s("%d", &n);
	LeftRound(arr, n);
	printf("%s", arr);
	return 0;
}