//要求:数组元素两端同时交换并程序运行时显示过程
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	char arr1[] = { "Hellow bit"};
	char arr2[] = { "**********" };
	int left = 0;
	int right = (sizeof(arr1) / sizeof(arr1[0]))-2;
	while (left < right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		left++;
		right--;
		for (int i = 0; arr1[i] != '\0'; i++)
			printf("%c", arr1[i]);
		Sleep(1000);
		system("cls");
	}
	return 0;
}