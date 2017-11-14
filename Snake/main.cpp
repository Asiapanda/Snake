#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <iostream>

using namespace std;

#define HMAX_SIZE 60
#define VMAX_SIZE 19

class SnakeInfo
{
public:
	int iSnakeX;
	int iSnakeY;
	int iSnakeDirecion;
};


char cMap[VMAX_SIZE][HMAX_SIZE] = { 0 };

void A_SetMap()
{
	for (int i = 0; i < VMAX_SIZE; i++)
	{
		for (int j = 0; j < HMAX_SIZE; j++)
		{
			if (i == 0 || i == VMAX_SIZE - 1)
			{
				cMap[i][j] = 15;
			}
			else if (j == 0 || j == HMAX_SIZE - 1)
			{
				cMap[i][j] = 15;
			}
		}
	}
}



void main()
{
	system("mode con cols=120 lines=30");
	cMap[1][1] = '@';
	int x = 1, y = 1;
	A_SetMap();
	while (1)
	{
		system("cls");
		for (int i = 0; i < VMAX_SIZE; i++)
		{
			for (int j = 0; j < HMAX_SIZE; j++)
			{
				cout << cMap[i][j];
				//printf("%c", cMap[i][j]);
			}
			cout << endl;
		}
		y++;
		if (x > VMAX_SIZE - 1 || y > HMAX_SIZE - 1)
			break;
		cMap[x][y - 1] = ' ';
		cMap[x][y] = '@';
		Sleep(100);
	}
}