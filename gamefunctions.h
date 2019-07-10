/* 7 July 2019
 * C Chess Game Logic
 */

#ifndef gamefunctions_h
#define gamefunctions_h

int setBoard()
{
	int x = 0; //define coordinates for the chessboard's char array.
	int y = 0;

	// char * piecePlacer = &board[0][0];
	
	/* Place the pieces without assigning colors. */
	for(int x = 0; x < 8; x++) 
	{
		for(int y = 0; y < 8; y++)
		{
			if ((((x == 0) ||(x == 7)) && ((y == 0) || (y == 7)))) //conditions to place rook
			{
				board[x][y] = ROOK;
			}
			else if ((((x == 1) || (x == 6)) && ((y == 0) || (y == 7)))) //conditions for knight
			{
				board[x][y] = KNIGHT;
			}
			else if ((x == 2 || x == 5) && (y == 0 || y == 7)) //conditions for bishop
			{
				board[x][y] = BISHOP;
			}
			else if ((x == 3) && (y == 0 || y == 7)) //conditions for queen
			{
				board[x][y] = QUEEN;
			}
			else if ((x == 4) && (y == 0 || y == 7)) //conditions for king
			{
				board[x][y] = KING;
			}
			else if (y == 1 || y == 6) //conditions for pawn
			{
				board[x][y] = PAWN;
			}
			else if (y >= 2 && y <= 5)
			{
				board[x][y] = NONE;
			}
			else
			{
				printf("Error setting up Chessboard\nError Code: %d\n", errno);
				perror("ENOTRECOVERABLE");
				exit(1);
			}
			
			// *piecePlacer = board[x][y];
		}
		y++;
	}

	
	return 0;
}
//TESTING CODE
int takePiece()
{
	return 0;
}

int check()
{
	return 0;
}



#endif
