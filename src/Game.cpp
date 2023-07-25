#include "Game.hpp"
#include "Stack.hpp"
#include <iostream>
#include <vector>


using namespace maff;

Game::Game()
{
    history.push(Board{});
}

void Game::pushBoard(Board &board)
{
    history.push(board);
}

void Game::popBoard()
{
    history.pop();
}

std::vector<Board> generateLegalMoves()
{
    std::vector<Board> v;
    int reservedAmount = 40;
    v.reserve(reservedAmount);
}

std::vector<Board> pawnMoves(Board &origin)
{
    std::vector<Board> moves;
    long white_pieces = origin.positionalBitmaps[WHITE_PAWN]
                      | origin.positionalBitmaps[WHITE_KNIGHT]
                      | origin.positionalBitmaps[WHITE_BISHOP]
                      | origin.positionalBitmaps[WHITE_ROOK]
                      | origin.positionalBitmaps[WHITE_QUEEN]
                      | origin.positionalBitmaps[WHITE_KING];
    long black_pieces = origin.positionalBitmaps[BLACK_PAWN]
                      | origin.positionalBitmaps[BLACK_KNIGHT]
                      | origin.positionalBitmaps[BLACK_BISHOP]
                      | origin.positionalBitmaps[BLACK_ROOK]
                      | origin.positionalBitmaps[BLACK_QUEEN]
                      | origin.positionalBitmaps[BLACK_KING];
    
}