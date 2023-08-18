#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------ɨ����Ϸ------\n");
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
	printf("------ɨ����Ϸ------\n");
}

//����
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

//ͳ���׸���
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



//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1�����������
	//2������괦�ǲ�����
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - count)
	{
		
		printf("���������꣺\n");
		scanf("%d %d", &x, &y);
		//�������Ϸ�
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
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (win == row * col - count)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}

