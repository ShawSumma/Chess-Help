/* 7 July 2019
 * Pieces for C Chess Game
 */

#ifndef pieces_h
#define pieces_h

/* This struct contains "sub-structs" which define information
 * about each chess piece, which will allow us to define their
 * behavior elsewhere.
 */

typedef struct
{
	enum
	{
		NONE = '-',
		PAWN = 'p',
		ROOK = 'r',
		KNIGHT = 'h',
		BISHOP = 'b',
		KING = 'k',
		QUEEN = 'q',
	} piece;
	enum {
		WHITE = 'w',
		BLACK = 'b',
	} color;
} piece;

#endif

