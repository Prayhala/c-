#include<stdio.h>
//喝汽水问题  喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf_s("%d", &money);
//	total = money;
//	empty = money;              //方法一
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//		return 0;
//}
//money  total
//20    20+10+5+2+1=39
//3     3+1+1=5                      2*n-1的数列
//10    10+5+2+1+1=19
//int main()
//{
//	int money = 0;
//	scanf_s("%d", &money);
//	int total = 2*money-1;       //优化
//	printf("%d", total);
//	return 0;
//}
// //                        打印菱形
//int main()
//{
//	int i = 0,line=0;
//	scanf_s("%d", &line);
//	for (i = 1; i <=line; i++)
//	{
//		int j = 0;
//		for (j = 1; j < 10 - i; j++)
//			printf(" ");
//		for (j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 6; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)
//			printf(" ");
//		for(j=1;j<=2*i-1;j++)
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//                               写一个函数，可以逆序一个字符串的内容。
//#include<string.h>
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;                      //方法一
//        *right = temp;
//        ++left;
//        --right;
//    }
//}
//
//
//int main()
//{
//    char str[] = "hello bit";
//    Reverse(str);
//    puts(str);
//    return 0;
//}
//#include<string.h>
//void reverse(char* arr)
//{
//	int len = strlen(arr)-1;
//	char tmp = arr[0];        //递归方式
//	arr[0] = arr[len];
//	arr[len] = '\0';
//	if (strlen(arr+1)>=2)
//		reverse(arr + 1);
//	arr[len] = tmp;
//}
//int main()
//{
//	char arr[] = { "china" };
//	reverse(arr);
//	puts(arr);
//	return 0;
//}