#ifndef DEALER_H
#define DEALER_H

#include "Deck.h"
#include "Player.cpp"
#include <vector>

//Dealer class definition
class Dealer
{
    public:
        Dealer();
        void Deal(std::string typeOfDeal);
        void DealTwo();
        void DealThree();
        Deck packOfCards;
        Player playerArray[4];
    private:
        Player playerOne;
        Player playerTwo;
        Player playerThree;
        Player playerFour;
        
};

#endif