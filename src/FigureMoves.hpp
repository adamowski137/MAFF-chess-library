#include <map>
#include <string>
#include <iostream>
namespace maffLibrary
{
    typedef std::pair<std::string, int> figure_position;
    class FigureMoves
    {
    private:
        void generateKnightMoves();
    public:
        FigureMoves();
        static std::map<figure_position, uint64_t> AvailableMoves;
    };
} // namespace maffLibrary
