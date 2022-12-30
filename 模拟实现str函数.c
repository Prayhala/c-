#include<stdio.h>
#include<string.h>
#include<assert.h>
////模拟实现strcat
//char* my_strcat(char* arr1,const char* arr2)
//{
//	assert( arr2 );
//	char* tmp = arr1;
//	while (*arr1 != '\0')
//		arr1++;
//	while (*arr1++ = *arr2++);
//	return tmp;
//}
//int main()
//{
//	char arr1[16] = { "hello" };
//	char arr2[] = { " bit" };
//	/*printf("%s",strcat(arr1,arr2));*/
//	printf("%s",my_strcat(arr1,arr2));
//	return 0;
//}

////模拟实现strcmp
//int my_strcmp(const char* arr1, const char* arr2)
//{
//	while (*arr1 == *arr2)
//	{
//		if (*arr1 == '\0')
//			return 0;
//		arr1++;
//		arr2++;
//	}
//	if (*arr1 > *arr2)
//		return 1;
//	else 
//		return -1;
//}
//int main()
//{
//	char arr1[] = {"abcd"};
//	char arr2[] = { "abcde" };
//	/*strcmp(arr1,arr2);*/
//	int ret=my_strcmp(arr1, arr2);
//	return 0;
//}

////模拟实现strcpy
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* tmp = arr1;
//	assert(arr1 && arr2);
//	while (*arr1++ = *arr2++);
//	return tmp;
//}
//int main()
//{
//	char arr1[] = {"hello bit"};
//	char arr2[] = {"hi"};
//	/*strcpy(arr1, arr2);*/
//	
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
//
////模拟实现strlen
//////递归算法（不创建临时变量）
////int my_strlen(const char* arr)
////{
//// assert(arr);
////	if(*arr!='\0')
////		return 1 + my_strlen(arr + 1);
////	else
////		return 0;
////}
////指针算法
//int my_strlen(char* arr)
//{
//	assert(arr);
//	char* start = arr;
//	char* end = arr;
//	while (*end)
//	{
//		end++;
//	}
//	return (int)(end - start);
//}
//int main()
//{
//	char arr1[] = {"abcdef"};
//	/*int ret=(int)strlen(arr1);*/
//	int ret = my_strlen(arr1);
//	printf("%d", ret);
//	return 0;
//}

//模拟实现strstr
char* my_strstr(char* p1, char* p2)
{
	assert(p1 && p2);
	if (*p2 == '\0')
		return p1;
	char* s1 = p1;
	char* s2 = p2;
	char* ret = p1;
	while (*ret)
	{
		s1 = ret;
		s2 = p2;
		while(*s1 == *s2 && *s1 && *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return ret;//找到
		ret++;
	}
	return NULL;//找不到
}
int main()
{
	char arr1[] = { "abccvcccde" };
	char arr2[] = { "ccc" };
	//printf("%s", strstr(arr1, arr2));
	printf("%s", my_strstr(arr1, arr2));
	return 0;
}