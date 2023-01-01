#include<stdio.h>
#include<string.h>
#include<assert.h>
////模拟实现memcpy
//void* my_memcpy(void* dest, void* src, size_t count)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2,arr1,sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	for(int i=0;i<10;i++)
//	printf("%d ", arr2[i]);
//	return 0;
//}

//模拟实现memmove
void* my_memmove(void* dest, void* src,size_t count)
{
	void* ret = dest;
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//memmove(arr+3,arr,20);
	my_memmove(arr+3,arr,20);
	return 0;
}