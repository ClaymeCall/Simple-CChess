#include "main.h"

/**
 *new_chessboard - Initializes a new chessboard, in starting configuration.
 *
 *Return: Double pointer to the new chessboard.
 */
char **new_chessboard(void)
{
        /* Allocating memory for double pointers, and error handling */
        char **address = malloc(sizeof(char *) * 8);
        if (address == NULL)
        {
                printf("Initialization failed");
                return (NULL);
        }

        /* Allocating memory for pointers, and error handling */
        for (int i = 0; i < 8; i++)
        {
                address[i] = malloc(sizeof(char) * 8);
                if (address[i] == NULL)
                {
                        printf("Initialization failed");
                        return (NULL);
                }
        }

        /* Populating the allocated memory with starting chessboard position */
        char initial[8][8] = {
                {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                {'.', '.', '.', '.', '.', '.', '.', '.'},
                {'.', '.', '.', '.', '.', '.', '.', '.'},
                {'.', '.', '.', '.', '.', '.', '.', '.'},
                {'.', '.', '.', '.', '.', '.', '.', '.'},
                {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        };

        for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                        address[i][j] = initial[i][j];
                }
        }

        return (address);
}
