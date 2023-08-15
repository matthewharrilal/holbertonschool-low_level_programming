#include "main.h"

#include <stdio.h>

void print_chessboard(char (*a)[8])
{
	int rowIndex;
        int columnIndex;
        char currentLetter;

        for (rowIndex = 0; rowIndex < 8; rowIndex++)
        {
                for (columnIndex = 0; columnIndex < 8; columnIndex++)
                {
                        currentLetter = a[rowIndex][columnIndex];
                        printf("%c", currentLetter);
                }
                printf("\n");
        }
}
