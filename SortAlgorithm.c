#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10
//初始化数组
void InitiArray(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 30 + 1;
	}
}

//打印函数
void print(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//交换函数
void SwapArray(int arr[], int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

//冒泡排序 从小到大
void BubbleSort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				SwapArray(arr, j, j + 1);
			}
		}
	}
}

//选择排序 从小到大
void SelectSort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		int min = i;
		for (int j = i; j < length; j++)
		{
			if (arr[min] > arr[j])
				min = j;
		}
		if (min != i)
			SwapArray(arr, i, min);
	}
}

//插入排序 从小到大
void InsertSort(int arr[], int start, int end)
{
	for (int i = start + 1; i < end; i++)
	{
		int j = 0;
		if (arr[i] < arr[i - 1])
		{
			int tmp = arr[i];
			for (j = i - 1; j >= 0 && tmp < arr[j]; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = tmp;
		}
	}
}

//希尔排序 从小到大
void ShellSort(int arr[], int length)
{
	int division = length;
	int i = 0, j = 0,tmp = 0,k = 0;
	do
	{
		division = division / 3 + 1;
		for (i = 0; i < division; i++)
		{
			for (j = i + division; j < length; j += division)
			{
				if (arr[j] < arr[j - division])
				{
					tmp = arr[j];
					for (k = j - division; j > 0 && tmp < arr[k]; k -= division)
					{
						arr[k + division] = arr[k];
					}
					arr[k + division] = tmp;
				}

			}
		}
	} while (division > 1);
}

//快速排序 从小到大
void QuickSort(int arr[], int start, int end)
{
	int i = start;
	int j = end;
	int tmp = arr[start];
	if( i< j)
	{
		while (i < j)
		{
			while (i < j && arr[j] >= tmp)
			{
				j--;
			}
			if (i < j)
			{
				arr[i] = arr[j];
				i++;
			}
			while (i < j && arr[i] < tmp)
			{
				i++;
			}
			if (i < j)
			{
				arr[j] = arr[i];
				j--;
			}
		}
		arr[i] = tmp;
		QuickSort(arr, start, i - 1);
		QuickSort(arr, i + 1, end);
	}
}

//合并排序
//合并
void Merge(int arr[], int start, int mid, int end, int temp[])
{
	int i_start = start, i_end = mid;
	int j_start = mid + 1, j_end = end;
	int length = 0;
	while (i_start <= i_end && j_start <= j_end)
	{
		if (arr[i_start] < arr[j_start])
		{
			temp[length] = arr[i_start];
			length++;
			i_start++;
		}
		else
		{
			temp[length] = arr[j_start];
			length++;
			j_start++;
		}
	}
	while (i_start <= i_end)
	{
		temp[length] = arr[i_start];
		length++;
		i_start++;
	}
	while (j_start <= j_end)
	{
		temp[length] = arr[j_start];
		length++;
		j_start++;
	}
	for (int i = 0; i < length; i++)
	{
		arr[start + i] = temp[i];
	}
}

void MergeSort(int arr[], int start, int end, int temp[])
{
	if (start >= end)
		return;
	int mid = (start + end) / 2;
	MergeSort(arr, start, mid, temp);
	MergeSort(arr, mid + 1, end, temp);
	Merge(arr, start, mid, end, temp);
}
//交换函数
void Swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//堆排序
void InitiHeap(int arr[], int index,int len)
{
	int lchild = 2 * index + 1, rchild = 2 * index + 2;
	int max = index;
	if (lchild<len && arr[lchild]>arr[max])
	{
		max = lchild;
	}
	if (rchild<len && arr[rchild]>arr[max])
	{
		max = rchild;
	}
	if (max != index)
	{
		Swap(arr, max, index);
		InitiHeap(arr, max, len);
	}
}

void HeapSort(int arr[], int len)
{
	for (int i = len -1; i >= 0; i--)
	{
		InitiHeap(arr, i, len);
	}
	for (int i = len - 1; i >= 0; i--)
	{
		Swap(arr, 0, i);
		InitiHeap(arr, 0, i);
	}
}

int main()
{
	int arr[MAX] = { 0 };
	int temp[MAX] = { 0 };
	srand((unsigned int)time(NULL));
	InitiArray(arr, MAX);
	print(arr, MAX);
	//BubbleSort(arr, MAX);
	//SelectSort(arr, MAX);
	//InsertSort(arr, 0, MAX);
	//ShellSort(arr, MAX);
	//QuickSort(arr, 0, MAX-1);
	//MergeSort(arr, 0, MAX-1, temp);
	HeapSort(arr, MAX);
	print(arr, MAX);
	return 0;
}