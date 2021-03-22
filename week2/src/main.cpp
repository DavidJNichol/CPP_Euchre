#include <iostream>
#include "Deck.cpp"
#include "Dealer.cpp"
#include <sstream>

int main()
{
    Deck d = Deck();
    Dealer dealer = Dealer();
    
    std::cout<<""<<std::endl;
    std::cout<<"Unshuffled cards: "<<std::endl;
    std::cout<<""<<std::endl;

    for(int i = 0; i < d.deck.size(); i++)
    {
        std::cout<<d.deck.at(i).face + " Of " + d.deck.at(i).suit<<std::endl; // print all the cards we need in order
    }

    std::cout<<""<<std::endl;
    std::cout<<" Shuffled: "<<std::endl;
    std::cout<<""<<std::endl;
    d.Shuffle();

    for(int i = 0; i < d.deck.size(); i++)
    {
       std::cout<<d.deck.at(i).face + " Of " + d.deck.at(i).suit<<std::endl; // print shuffled cards to demonstrate shuffle works
    }

    std::cout<<""<<std::endl;
    std::cout<<"The Deal:"<<std::endl;
    std::cout<<""<<std::endl;

    dealer.packOfCards.Shuffle(); // Shuffle the cards we need to give to the players
    dealer.Deal("threeFirst"); // deal three first, then two

    for(int i = 0; i < sizeof(dealer.playerArray)/sizeof(dealer.playerArray[0]); i++)
    {
        std::cout<<dealer.playerArray[i].name + ":"<<std::endl; // print player names 
        for(int k = 0; k < dealer.playerArray[i].hand.size(); k++)
        {
            std::cout<<dealer.playerArray[i].hand.at(k).face + " Of " + dealer.playerArray[i].hand.at(k).suit<<std::endl;   //print player hands         
        }

        std::cout<<""<<std::endl;
    }

    std::cout<<"Flip over top card:"<<std::endl;
    std::cout<<""<<std::endl;

    std::cout<<dealer.ExposeTopCard().face + " Of " + dealer.ExposeTopCard().suit<<std::endl; // print top card
    std::cout<<""<<std::endl;

    dealer.ChooseTrump();

    std::cout<<"Trump card:"<<std::endl;
    std::cout<<""<<std::endl;

    dealer.packOfCards.trumpCard.face = dealer.packOfCards.faceArray[2]; // Set to be jack

    dealer.packOfCards.trumpCard.suit = dealer.ExposeTopCard().suit; // set to be trump suit

    std::cout<<dealer.packOfCards.trumpCard.face + " Of " + dealer.packOfCards.trumpCard.suit<<std::endl; 
    std::cout<<""<<std::endl;
    
    std::string result;
    std::ostringstream convert;

    convert << dealer.RankHand(dealer.playerArray[0]);

    result = convert.str(); 
   
    std::cout<<"Player One HandScore:"<<std::endl; 
    std::cout<<result<<std::endl;

    std::ostringstream convert2;

    convert2 << dealer.RankHand(dealer.playerArray[1]);

    result = convert2.str(); 
   
    std::cout<<"Player Two HandScore:"<<std::endl; 
    std::cout<<result<<std::endl;

     std::ostringstream convert3;

    convert3 << dealer.RankHand(dealer.playerArray[2]);

    result = convert3.str(); 
   
    std::cout<<"Player Three HandScore:"<<std::endl; 
    std::cout<<result<<std::endl;

     std::ostringstream convert4;
   
    convert4 << dealer.RankHand(dealer.playerArray[3]);

    result = convert4.str(); 
   
    std::cout<<"Player Four HandScore:"<<std::endl; 
    std::cout<<result<<std::endl;

    std::cout<<""<<std::endl;

    for(int i = 0; i < sizeof(dealer.playerArray)/sizeof(dealer.playerArray[0]); i++)
    {
        std::cout<<dealer.playerArray[i].name + " plays: " + dealer.PlayCard(dealer.playerArray[i]).face + " Of " + dealer.PlayCard(dealer.playerArray[i]).suit <<std::endl;
    }

    dealer.DetermineRoundWinner();
       
    return 0;  
}          