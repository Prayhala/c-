#include<stdio.h>
#define num 10
int main()
{
	int i = 0;
	int arr[num] = { 0 };
	printf("������\n");
	for (i = 0; i < num; i++)
		scanf_s("%d",&arr[i]);
	printf("\n");
	printf("���������Ϊ:");
	for (i = 0; i < num; i++)
		printf("%d", arr[i]);
	printf("\n");
	for (i = 0; i < num - 1; i++)
	{
		int min = i,j=0;
		for (j = i+1; j < num; j++)
		{
			if (arr[min] > arr[j])
				min = j;
		}
		if (i != min)
		{
			int tem = arr[i];
			arr[i] = arr[min];
			arr[min] = tem;
		}
	}
	for (i = 0; i < num; i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}