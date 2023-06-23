#include "FigureMoves.hpp"
#include <map>
#include <string>

using namespace maffLibrary;

FigureMoves::FigureMoves()
{
    generateKnightMoves();
}

std::map<figure_position, uint64_t> FigureMoves::AvailableMoves = std::map<figure_position, uint64_t>();

void FigureMoves::generateKnightMoves() {
    
    int dx[] = {2, 1, -1, -2, -2, -1,  1,  2};
    int dy[] = {1, 2,  2,  1, -1, -2, -2, -1};
    for(int row = 0; row < 8; row++)
    {
        for(int column = 0; column < 8; column++)
        {
            uint64_t moves = 0;
            for (int k = 0; k < 8; ++k) 
            {
                int x = column + dx[k];
                int y = row + dy[k];
                
                if (x >= 0 && x < 8 && y >= 0 && y < 8) {
                    moves |= (1ULL << (y * 8 + x));
                }
            }
            // std::cout<<moves<<std::endl;
            AvailableMoves[figure_position("n", row * 8 + column)] = moves;
        }
    }
    
}