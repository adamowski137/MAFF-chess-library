#pragma once

#include "Board.hpp"
#include "Stack.hpp"
#include <iostream>
namespace maff
{
    class Game
    {
    private:
        Stack<Board> history;
        

    public:
        Game();

        void pushBoard(Board& b);
        void popBoard();

        std::vector<Board> generateLegalMoves();

        friend std::ostream &operator<<(std::ostream& out, const Game& game)
        {
            return out << game.history.top() << std::endl;
        }
        std::vector<Board> pawnMoves(Board &origin);

    };

}
