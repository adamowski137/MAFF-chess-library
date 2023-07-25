#include "Board.hpp"
#include <iostream>

using namespace maff;
Board::Board()
{
    positionalBitmaps[WHITE_PAWN] = stringToBitmapPosition("a2")
                                  | stringToBitmapPosition("b2")
                                  | stringToBitmapPosition("c2")
                                  | stringToBitmapPosition("d2")
                                  | stringToBitmapPosition("e2")
                                  | stringToBitmapPosition("f2")
                                  | stringToBitmapPosition("g2")
                                  | stringToBitmapPosition("h2");

    positionalBitmaps[WHITE_ROOK] = stringToBitmapPosition("a1")
                                  | stringToBitmapPosition("h1");
                                  
    positionalBitmaps[WHITE_KNIGHT] = stringToBitmapPosition("b1")
                                    | stringToBitmapPosition("g1");

    positionalBitmaps[WHITE_BISHOP] = stringToBitmapPosition("c1")
                                    | stringToBitmapPosition("f1");

    positionalBitmaps[WHITE_QUEEN] = stringToBitmapPosition("d1");
    
    positionalBitmaps[WHITE_KING] = stringToBitmapPosition("e1");


    positionalBitmaps[BLACK_PAWN] = stringToBitmapPosition("a7")
                                  | stringToBitmapPosition("b7")
                                  | stringToBitmapPosition("c7")
                                  | stringToBitmapPosition("d7")
                                  | stringToBitmapPosition("e7")
                                  | stringToBitmapPosition("f7")
                                  | stringToBitmapPosition("g7")
                                  | stringToBitmapPosition("h7");

    positionalBitmaps[BLACK_ROOK] = stringToBitmapPosition("a8")
                                  | stringToBitmapPosition("h8");
                                  
    positionalBitmaps[BLACK_KNIGHT] = stringToBitmapPosition("b8")
                                    | stringToBitmapPosition("g8");

    positionalBitmaps[BLACK_BISHOP] = stringToBitmapPosition("c8")
                                    | stringToBitmapPosition("f8");

    positionalBitmaps[BLACK_QUEEN] = stringToBitmapPosition("d8");
    
    positionalBitmaps[BLACK_KING] = stringToBitmapPosition("e8");
}

long Board::stringToBitmapPosition(std::string s)
{
    int column = s[0] - 'a';
    int row = s[1] - '1';

    long mask = 1;
    mask = (mask << (8 * row));
    mask = (mask << column);

    return mask;
}
