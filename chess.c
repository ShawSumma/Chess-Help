/* July 2019
 *
 * Chess in C
 *
 * Play a game of chess using the coordinates of each piece. This is intended for use as a backend for some
 * other application, due to it's minimal nature.
 */

#include "includes.h"

int main(void)
{
	setBoard();

	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			printf("%c", board[x][y]);
		}
		printf("\n");
	}
	
	//x = movePiece(0, 0, 4, 0);

	//printf("moved piece is: %c\n", board[4][0]);
	
	setBoard();

	return 0;
}
