#ifndef piecemovement_h
#define piecemovement_h

/* PIECE MOVEMENT
 *
 * The following header file contains the logic to allow pieces
 * to move about the chessboard, accomplished by creating pointers
 * x1, x2, y1 and y2 and using them to write to board[8][8].
 * The logic is implemented by returning 1 and printing an error
 * if the user makes an invalid move.
 */

int movePiece(int a, int b, int c, int d)
{
	//set coordinates for moving pieces
	int x1 = a;
	int y1 = b;
	int x2 = c;
	int y2 = d;

	
	//pointers to use coordinates
	int * ptr_x1 = &x1;
	int * ptr_y1 = &y1;
	int * ptr_x2 = &x2;
	int * ptr_y2 = &y2;

	char piecevalue = board[x1][y1];

	printf("Selected following piece: %c\n", piecevalue);

	//the following contains the game logic for the pieces. they are checked
	//to see if the selected piece is valid, and then proceeds with the moving
	//of the piece (also taking other pieces). 
	
	if (piecevalue == PAWN)
	{
		if ((x1 == x2) && ((y1 + 1) == y2)) //PAWN PASSED
		{
			board[x2][y2] = PAWN;
			board[x1][y1] = NONE;
			return 0;
		}
		else if ((((x1 + 1) == x2) || ((x1 - 1) == x2)) && ((y1 + 1) == y2) && (board[x2][y2] != NONE))
		{
			board[x2][y2] == PAWN;
			board[x1][y1] == NONE;
			return 0;
		}	
	}
	else if (piecevalue == ROOK) //ROOK HAS ERROR
	{
		if (((x1 < x2) || (x1 > x2)) && (y1 == y2))
		{
			board[x2][y2] = ROOK;
			board[x1][y1] = NONE;

			return 0;
		}
		else if ((x1 == x2) && ((y1 < y2) || (y1 > y2)))
		{
			board[x2][y2] = ROOK;
			board[x1][y1] = NONE;

			return 0;
		}
		else
		{
			printf("Incorrect move\n");
			return 1;
		}
	}
	else if (piecevalue == KNIGHT) //KNIGHT PASSED
	{
		if (((x1 + 1) == x2) && ((y1 + 2) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 1) == x2) && ((y1 + 2) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 + 1) == x2) && ((y1 - 2) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 1) == x2) && ((y1 - 2) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 2) == x2) && ((y1 + 1) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 2) == x2) && ((y1 - 1) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 + 2) == x2) && ((y1 + 1) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 + 2) == x2) && ((y1 - 1) == y2))
		{
			board[x2][y2] = KNIGHT;
			board[x1][y1] = NONE;

			return 0;
		}
		else
		{
			printf("Incorrect move\n");
			return 1;
		}
	}
	else if (piecevalue == BISHOP) //BISHOP PASSED
	{
		if ((x2 - x1) == (y2 - y1))
		{
			board[x2][y2] = BISHOP;
			board[x1][y1] = NONE;

			return 0;
		}
		else
		{
			printf("Incorrect move\n");
			return 1;
		}
	}
	else if (piecevalue == KING) //KING PASSED
	{
		if (((x1 + 1) == x2) && (y1 == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 1) == x2) && (y1 == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else if ((x1 == x2) && ((y1 + 1) == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else if ((x1 == x2) && ((y1 - 1) == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;
			
			return 0;
		}
		else if (((x1 + 1) == x2) && ((y1 + 1) == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 1) == x2) && ((y1 - 1) == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 - 1) == x2) && ((y1 + 1) == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 + 1) == x2) && ((y1 -1) == y2))
		{
			board[x2][y2] = KING;
			board[x1][y1] = NONE;

			return 0;
		}
		else
		{
			printf("Incorrect move\n");
			return 1;
		}
	}
	else if (piecevalue == QUEEN) //QUEEN PASSED
	{
		if ((x2 - x1) == (y2 - y1))
		{
			board[x2][y2] = QUEEN;
			board[x1][y1] = NONE;

			return 0;
		}
		else if (((x1 < x2) || (x1 > x2)) && (y1 == y2))
		{
			board[x2][y2] = QUEEN;
			board[x1][y1] = NONE;

			return 0;
		}
		else if ((x1 == x2) && ((y1 < y2) || (y1 > y2)))
		{
			board[x2][y2] = QUEEN;
			board[x1][y1] = NONE;

			return 0;
		}
		else
		{
			printf("Incorrect move\n");
			return 1;
		}

	}
	else if (piecevalue == NONE)
	{
		printf("That's not a piece.\n");
		return 1;
	}
	else
	{
		printf("Error selecting piece to move\nError Code: %d\n", errno);
		perror("ENOTRECOVERABLE");
		exit(1);
	}

	return 0;
}


#endif
