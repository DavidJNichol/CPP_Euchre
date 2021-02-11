#include "Dealer.h"


Dealer::Dealer()
{
    playerArray[0] = playerOne;
    playerArray[1] = playerTwo;
    playerArray[2] = playerThree;
    playerArray[3] = playerFour;

    playerArray[0].name = "playerOne";
    playerArray[1].name = "playerTwo";
    playerArray[2].name = "playerThree";
    playerArray[3].name = "playerFour";
}


void Dealer::Deal(std::string typeOfDeal)
{
    for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++)
    {
        for(int k = 0; k < sizeof(playerArray[i].hand)/sizeof(playerArray[i].hand[0]); k++)
        {
            playerArray[i].hand[k] = packOfCards.deck.at(k);
            packOfCards.deck.erase(packOfCards.deck.begin()+k);
        }
    }


    //if(typeOfDeal == "twoFirst")
    //{
    //    DealTwo();
    //    DealThree();
    //}
    //else if(typeOfDeal == "threeFirst")
    //{
    //    DealThree();
    //    DealTwo();
    //}
    //else
    //{

    //}
}

void Dealer::DealTwo()
{
    for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++)
    {
        for(int k = 0; k < 2; k++)
        {
            playerArray[i].hand[k] = packOfCards.deck.at(k);
            packOfCards.deck.erase(packOfCards.deck.begin()+i);
        }
    }
    if(packOfCards.deck.size() <= 4)
    {
        //DealThree();
    }
        
}

void Dealer::DealThree()
{
    for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++)
    {
        for(int k = 0; k < 2; k++)
        {
            playerArray[i].hand[k] = packOfCards.deck.at(k);
            packOfCards.deck.erase(packOfCards.deck.begin()+i);
        }
    }
    if(packOfCards.deck.size() <= 4)
    {
        //DealTwo();
    }
        
}

