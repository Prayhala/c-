#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;       //��i>9ʱ��arr[i]Խ�����
//        printf("hello bit\n");//��Ϊ����ѭ��ʱ��ʱ���ھֲ�����arr[i]
//    }
//    return 0;
//}
////��Ϊ����ѭ��ʱ�������ھֲ�����arr[i]������ջ����ջ���ǴӸߵ�ַ��ʼ�洢����i>9ʱ����Խ�������i���ڵĵ�ַ
////����i����ֵ����Ϊ��0��ʹ����һֱѭ����ȥ

////��������ż��˳��
////��������ʹ����ȫ����λ��ż��ǰ�档
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 != 0)
//			left++;
//		while (left < right && arr[right] % 2 == 0)
//			right--;
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for(int i=0;i<10;i++)
//	printf("%d ", arr[i]);
//	return 0;
//}