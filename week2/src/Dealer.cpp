#include "Dealer.h"


Dealer::Dealer()
{
    // set up 4 players
    playerArray[0] = playerOne;
    playerArray[1] = playerTwo;
    playerArray[2] = playerThree;
    playerArray[3] = playerFour;

    // player names set
    playerArray[0].name = "playerOne";
    playerArray[1].name = "playerTwo";
    playerArray[2].name = "playerThree";
    playerArray[3].name = "playerFour";
}


void Dealer::Deal(std::string typeOfDeal)
{
    if(typeOfDeal == "twoFirst")
    {
        for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++) // Loop through each player
        {
            for(int k = 0; k < 2; k++) // loop through deck and give each player 2 cards
            {
                playerArray[i].hand.at(k) = packOfCards.deck.at(k); // player at i gets two cards  
                packOfCards.deck.erase(packOfCards.deck.begin()+k); // remove the cards given
            }
        }

        for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++)
        {
            for(int k = 2; k < 5; k++) // this time each player gets three
            {
                playerArray[i].hand.at(k) = packOfCards.deck.at(k);
                packOfCards.deck.erase(packOfCards.deck.begin()+k);
            }
        }
    }
    else if(typeOfDeal == "threeFirst")
    {
        for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++)
        {
            for(int k = 0; k < 3; k++) // three cards given first
            {
                playerArray[i].hand.at(k) = packOfCards.deck.at(k);
                packOfCards.deck.erase(packOfCards.deck.begin()+k);
            }
        }

        for(int i = 0; i < (sizeof(playerArray)/sizeof(playerArray[0])); i++)
        {
            for(int k = 3; k < 5; k++) // then two
            {
                playerArray[i].hand.at(k) = packOfCards.deck.at(k);
                packOfCards.deck.erase(packOfCards.deck.begin()+k);
            }
        }
    }
    
}

Card Dealer::ExposeTopCard(){return packOfCards.deck.at(0);}; // returns card at vector index 0

float Dealer::RankHand()
{

    return .5;
}

Card Dealer::FindCardsOfTypeSuit(Player player)
{
    for(int i = 0; i < sizeof(player.hand)/sizeof(player.hand[0]); i++)
    {
        if(player.hand.at(i).suit == packOfCards.trumpCard.suit && player.hand.at(i).face == "Jack") // Right bower
        {
            handRating = 1; // 100% chance of win
        } 
        // We need to figure out a way to recognize the trump card's sister suit, then check for left bower
        
    }
}



