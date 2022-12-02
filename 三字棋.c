#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("***   1.play       0.exit    ***\n");
	printf("********************************\n");
}
void InitBoard(char arr1[ROW][COL] ,int row, int col)
{
	int i = 0,  j = 0;
	for (i = 0; i <= row-1; i++)
	{
		for (j = 0; j <= col-1; j++)
		{
			arr1[i][j] = ' ';
		}
	}
}
void DisplayBoard(char arr[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i <= row-1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}	
		printf("\n");
			if (i < row - 1)
			{
				for (j = 0; j <= col - 1; j++)
				{
					printf("---");
					if (j < col - 1)
						printf("|");
				}
				printf("\n");
			}
	}
}
void PlayMove(char arr1[ROW][COL], int row, int col)
{
	int i, j;
	while (1)
	{
		printf("玩家走>:");
		scanf_s("%d %d", &i, &j);
		if (1 <= i && i <= row && 1 <= j && j <= col)
		{
			if (arr1[i - 1][j - 1] == ' ')
			{
				arr1[i - 1][j - 1] = '*';
				break;
			}
			else
				printf("该坐标已被占用\n");
		}
		else
			printf("坐标输入非法，请重新输入\n");
	}
}
void ComputerMove(char arr1[ROW][COL], int row, int col)
{
	int i, j;
	printf("电脑下>:\n");
	while (1)
	{
        i = rand() % ROW + 1;
	    j = rand() % COL + 1;
		if (arr1[i - 1][j - 1] == ' ')
		{
			arr1[i - 1][j - 1] = '#';
			break;
		}
	}
}
 int full(char arr1[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row;i++);
	{
		for (j = 0; j < col; j++)
		{
			if (arr1[i][j] == ' ');
				return 0;
		}
	}
	return 1;
}
char judge(char arr1[ROW][COL],int row,int col)
{
	int i,j;
	for (j = 0; j < ROW; j++)
	{
		for (i = 0; i < COL; i++)
		{
			if (arr1[j][0] == arr1[j][1] && arr1[j][1] == arr1[j][2] && arr1[j][0] != ' ')
				return arr1[j][0];
		}
	}
	for (j = 0; j < COL; j++)
	{
		for (i = 0; i < ROW; i++)
		{
			if (arr1[0][j] == arr1[1][j] && arr1[1][j] == arr1[2][j] && arr1[0][j] != ' ')
				return arr1[0][j];
		}
	}
			if (arr1[0][0] == arr1[1][1] && arr1[1][1] == arr1[2][2] && arr1[0][0] != ' ')
				return arr1[0][0];
			if (arr1[0][2] == arr1[1][1] && arr1[1][1] == arr1[2][0] && arr1[0][2] != ' ')
				return arr1[0][2];
		if (full(arr1, ROW, COL) == 1)
		{
			return 'Q';
		}
		return 'C';
}
void game()
{
    int ret;
    char arr1[ROW][COL] = { 0 };
	InitBoard(arr1, ROW, COL);
	DisplayBoard(arr1, ROW, COL);
	while (1)
	{
		PlayMove(arr1, ROW, COL);
		DisplayBoard(arr1, ROW, COL);
		ret = judge(arr1, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(arr1, ROW, COL);
        DisplayBoard(arr1, ROW, COL);
		ret = judge(arr1, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
			printf("玩家赢\n");
		else if (ret == '#')
			printf("电脑赢\n");
		else
			printf("平局\n");
		DisplayBoard(arr1, ROW, COL);
	
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
	    menu();
		printf("请输入>:\n");
		scanf_s("%d",&input);
		switch (input)
		{
		 case 1:game(); break;
		 case 0:printf("退出游戏\n");  break;
		 default:printf("输入错误\n");
		 }
	} while (input);
	return 0;
}