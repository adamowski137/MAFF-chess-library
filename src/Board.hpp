#pragma once

#include <string>
#include <iostream>

namespace maff
{
    enum Figures{
        WHITE_KING,
        WHITE_QUEEN,
        WHITE_ROOK,
        WHITE_BISHOP,
        WHITE_KNIGHT,
        WHITE_PAWN,
        BLACK_KING,
        BLACK_QUEEN,
        BLACK_ROOK,
        BLACK_BISHOP,
        BLACK_KNIGHT,
        BLACK_PAWN,
    };

    class Board
    {
    private:
        long stringToBitmapPosition(std::string s);  
    public:
        long positionalBitmaps[12];
        Board();
        
        friend std::ostream &operator<<(std::ostream& out, const Board& board)
        {
            std::string chessboard = "";
            for(long y = 7; y >= 0; y--){
                for(long x = 0; x < 8; x++){
                    int i = y * 8 + x;
                    
                    if((1L << i) & board.positionalBitmaps[WHITE_KING])
                        chessboard += "K";
                    else if((1L << i) & board.positionalBitmaps[WHITE_BISHOP])

                        chessboard += "B";
                    else if((1L << i) & board.positionalBitmaps[WHITE_KNIGHT])
                        chessboard += "N";
                    else if((1L << i) & board.positionalBitmaps[WHITE_PAWN])
                        chessboard += "P";
                    else if((1L << i) & board.positionalBitmaps[WHITE_QUEEN])
                        chessboard += "Q";
                    else if((1L << i) & board.positionalBitmaps[WHITE_ROOK])
                        chessboard += "R";
                    else if((1L << i) & board.positionalBitmaps[BLACK_KING])
                        chessboard += "k";
                    else if((1L << i) & board.positionalBitmaps[BLACK_BISHOP])
                        chessboard += "b";
                    else if((1L << i) & board.positionalBitmaps[BLACK_KNIGHT])
                        chessboard += "n";
                    else if((1L << i) & board.positionalBitmaps[BLACK_PAWN])
                        chessboard += "p";
                    else if((1L << i) & board.positionalBitmaps[BLACK_QUEEN])
                        chessboard += "q";
                    else if((1L << i) & board.positionalBitmaps[BLACK_ROOK])
                        chessboard += "r";
                    else 
                        chessboard += ".";
                    }
                chessboard += "\n";
            }
            return out << chessboard;
        }
    };

} // namespace maff
