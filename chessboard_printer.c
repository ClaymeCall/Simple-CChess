#include <stdio.h>
#include <stdlib.h>

/**
 *chessboard_printer - Prints a chessboard in a certain configuration.
 *@curr_conf: The current configuration to print, as a 2D array.
 *
 *Return: void
 */
void chessboard_printer(char **curr_conf)
{
	printf("\n\n");

	for (int i = 0; i < 8; i++)
	{
		/* Printing row number on the left of the chessboard */
		printf("%d | ", 8 - i);

		/* Printing a  whole row of the current config */
		for (int j = 0; j < 8; j++)
		{
			printf("%c ", curr_conf[i][j]);
		}

		printf("\n");
	}

	/* Printing column letter denomination under the chess board */
	printf("   ---------------- \n");
	printf("    a b c d e f g h \n\n");
}

int main (void)
{
	chessboard_printer(new_chessboard());
	return (0);
}
