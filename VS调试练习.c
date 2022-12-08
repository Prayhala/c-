#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;       //当i>9时，arr[i]越界访问
//        printf("hello bit\n");//当为无限循环时，时由于局部变量arr[i]
//    }
//    return 0;
//}
////当为无限循环时，是由于局部变量arr[i]创建在栈区，栈区是从高地址开始存储，当i>9时可能越界访问了i所在的地址
////导致i的数值被改为了0，使程序一直循环下去

////调整奇数偶数顺序
////调整数组使奇数全部都位于偶数前面。
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