#include <stack>
#include <chrono>
#include <iostream>
#include <vector>
#include "Stack.hpp"
#include "Game.hpp"


int main()
{
    using namespace maff;
    Game game;

    auto start = std::chrono::high_resolution_clock::now() ;

    for(int i = 0; i < 1e6; i++){
        Board b;
        game.pushBoard(b);
    }
    std::cout << game << std::endl;

    auto dur = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start);  
    std::cout << dur.count() << '\n';
}