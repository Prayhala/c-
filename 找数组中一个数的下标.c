#include<stdio.h>
#define num 5
int main()
{
	int arr[num] = { 0 };
	int k=0,i=0;
	printf("�����������Ԫ��\n");
	for(i=0;i<num;i++)
	scanf_s("%d", &arr[i]);
	printf("��������Ҫ�ҵ���\n");
	scanf_s("%d",&k);
	//for (i = 0; i < num; i++)
	//{
	//	if (arr[i] == k)
	//		break;
	//}
	//printf("%d���±�Ϊ%d",k,i);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid+1;
		else if (arr[mid] > k)
			right = mid-1;
		else
			printf("%d���±�Ϊ%d", k, mid);
			break;
	}
	
	return 0;
}