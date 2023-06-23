#include <iostream>
#include <iomanip>
#include <bitset>
#include "FigureMoves.hpp"

using namespace maffLibrary;

int main()
{
    FigureMoves f{};
    uint64_t mask = 1;
    uint64_t t = FigureMoves::AvailableMoves[std::pair<std::string, int>("n", 0)];
    for(int i = 0; i < 64; i++)
    {
        std::cout<< ((mask & t) > 0) ? 1 : 0;
        mask = (mask << 1);
        if(i % 8 == 7) std::cout<<std::endl;
    }
}