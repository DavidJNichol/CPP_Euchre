#include <string>

#ifndef DECK_H
#define DECK_H
// Card struct definition
struct Card
{
    public:
        std::string suit;       
        std::string face;
};

//Deck class definition
class Deck
{
    public:
        Deck();
        void Shuffle();
        Card deck[24];
        std::string suitArray[4] = {"Hearts", "Diamonds", "Spades", "Clubs"};
        std::string faceArray[6] = {"9", "10", "Jack", "Queen", "King", "Ace"};
};
#endif