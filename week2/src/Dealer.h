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
        Deck packOfCards;
        Player playerArray[4];
        Card ExposeTopCard();
        double RankHand(Player player);
        std::string DetermineSisterSuit();
        
    private:
        Player playerOne; //players instantiation 
        Player playerTwo;
        Player playerThree;
        Player playerFour;
        
};

#endif