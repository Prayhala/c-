#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 40
void menu()
{
	printf("***********************************************\n");
	printf("***     1.play             2.exit           ***\n");
	printf("***********************************************\n");
}
void InitBoard(char arr1[ROWS][COLS], int row, int col, char set)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			arr1[i][j] = set;
	}
}
void Display(char arr1[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
		if (i >= 1)
			printf("  ");
	}
		printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c", arr1[i][j]);
			if (j < col )
				printf(" | ");
		}
		printf("\n");
	}
}
void SetMine(char arr2[ROWS][COLS],int row,int col)
{
	int count = COUNT;
	srand((unsigned)time(NULL));
	while (count)
	{
		int i = rand() % ROW + 1;
		int j = rand() % COL + 1;
		if (arr2[i][j] = '0')
		{
			arr2[i][j] = '1';
			count--;
		}
	}
}
int get_num_mine(char arr2[ROWS][COLS],int x,int y)
{
	return arr2[x][y + 1] + arr2[x][y - 1] + arr2[x+1][y] + arr2[x-1][y]
		+ arr2[x+1][y + 1] + arr2[x+1][y - 1] + arr2[x-1][y + 1] + arr2[x-1][y - 1] - 8 * '0';
}
void FindMine(char arr2[ROWS][COLS],char arr1[ROWS][COLS],int rows,int cols)
{
	int a = 0, b = 0;
	int win = 0;
	while (win<rows*cols-COUNT)
	{
		printf("请输入坐标(以逗号形式分隔开)\n");
		scanf_s("%d,%d", &a, &b);
		if (1 <= a && a <= rows && 1 <= b && b <= cols)
		{
			if (arr2[a][b] == '0')
			{
				int count = get_num_mine(arr2,a,b);
				arr1[a][b] = count+'0';
				Display(arr1, ROW, COL);
				win++;
			}
			else
			{
				printf("你被炸死了(1为雷)\n");
				Display(arr2, ROW, COL);
				break;
			}
		}
		else
			printf("输入错误，请重新输入\n");
	}
	if (win == rows * cols - COUNT)
		printf("恭喜你获胜\n");
}
void game()
{
	char arr1[ROWS][COLS] = {0};
	char arr2[ROWS][COLS] = { 0 };
	InitBoard(arr1, ROWS,COLS, '*');
	InitBoard(arr2, ROWS, COLS, '0');
	Display(arr1, ROW, COL);
	SetMine(arr2,ROWS,COLS);
	FindMine(arr2,arr1,ROWS,COLS);
}
int main()
{
	int n = 0;
	do
	{
		menu();
		printf("请输入\n");
		scanf_s("%d", &n);
		switch (n)
		{
		case 1:game(); break;
		case 0:printf("退出游戏\n"); break;
		default:printf("输入错误，请重新输入\n");
		}
	} while (n);
	return 0;
}