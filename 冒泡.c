#define num 10
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[num] = { 0,2,8,6,7,3,4,9,1,5 };
	printf("ÇëÊäÈë\n");
	for (i = 0; i < num; i++)
		scanf_s("%d", &arr[i]);
	for (i = 0; i < num; i++)
	{
		int j = 0, flag = 0;
		for (j = 0; j <num - 1 - i; j++)
		{
			int tem=0;
			if (arr[j] > arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	for(i=0;i<num;i++)
	printf("%d ",arr[i]);
	return 0;
}