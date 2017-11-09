#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#define HMAX_SIZE 79
#define VMAX_SIZE 24


char cMap[VMAX_SIZE][HMAX_SIZE] = { 0 };


void main()
{
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
		Sleep(1000);
	}
}