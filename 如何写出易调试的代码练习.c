#include<stdio.h>
#include<assert.h>
////模拟实现库函数strlen
////int my_strlen(char* p)
////{
////	if (*p == '\0')
////		return 0;       //递归算法
////	else
////	return 1 + my_strlen(p + 1);
////}
////int my_strlen(char *p)
////{
////	int count = 0;
////	while (*p != '\0')
////	{
////		count++;       //非递归算法
////		p++;
////	}
////	return count;
////}
//int my_strlen(const char *p)
//{
//	const char* a = p;
//	while (*a++);
//	return (a-p-1);
//}
//int my_strlen(const char *p)
//{
// assert(*p!=NULL);
//	int count = 0;
//	while (*p++)
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = { "hello bit" };
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

//模拟实现库函数strcpy
//void my_strcpy(char* p1,char* p2)
//{
//	while ((*p1) != '\0' && (*p2) != '\0')//指针解法
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//}
//void my_strcpy(char arr1[],char arr2[],int sz)
//{
//	int left = 0;
//	int right = sz;
//	while (left < right)
//	{
//		arr1[left] = arr2[left];
//		arr1[right] = arr2[right];
//		left++;
//		right--;
//	}
//}
//char* my_strcpy(char* a,const char* b)
//{
//	char* ret = a;
//	assert(a!=NULL);
//	assert(b!=NULL);        //最好写法
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = { "hello bit" };
//	char arr2[] = { "*********" };
//	int sz = sizeof(arr1) / sizeof(arr1[0])-1;
//	//my_strcpy(arr1, arr2,sz);
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
