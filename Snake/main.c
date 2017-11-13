#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define HMAX_SIZE 119
#define VMAX_SIZE 29


WCHAR cMap[VMAX_SIZE][HMAX_SIZE] = { 0 };

void A_SetMap()
{
	for (int i = 0; i < VMAX_SIZE; i++)
	{
		for (int j = 0; j < HMAX_SIZE; j++)
		{
			if (i == 0)
			{
				cMap[i][j] = '¡ï';
			}
			else if (i == VMAX_SIZE - 1)
			{
				cMap[i][j] = '¡ö';
			}
			else if (j == 0)
			{
				cMap[i][j] = '¡ö';
			}
			else if (j == HMAX_SIZE - 1)
			{
				cMap[i][j] = '¡ö';
			}
		}
	}
}



void main()
{
	system("mode con cols=120 lines=30");
	cMap[0][0] = '@';
	int x = 0, y = 0;
	while (1)
	{
		system("cls");
		for (int i = 0; i < VMAX_SIZE; i++)
		{
			for (int j = 0; j < HMAX_SIZE; j++)
			{
				printf("%c", cMap[i][j]);
			}
			printf("\n");
		}
		cMap[x][y++] = '\0';
		if (x > VMAX_SIZE || y > HMAX_SIZE)
			break;
		cMap[x][y] = '@';
		A_SetMap();
		Sleep(1000);
	}
}