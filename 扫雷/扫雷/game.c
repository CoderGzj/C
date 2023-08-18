#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

//布雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int num= count;
	while (num)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			num--;
		}
	}
}

//统计雷个数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int num = 0;
	int i = 0;
	int j = 0;
	for (i = - 1; i <= 1; i++)
	{
		for (j = - 1; j <= 1; j++)
		{
			if (mine[x + i][y + j] == '1')
				num++;
		}
	}
	return num;
}



//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1输入查找坐标
	//2检查坐标处是不是雷
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - count)
	{
		
		printf("请输入坐标：\n");
		scanf("%d %d", &x, &y);
		//检查坐标合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				int num = get_mine_count(mine, x, y);
				show[x][y] = num + '0';
				DisplayBoard(show, row, col);
				win++;
			}
			else
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - count)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}

