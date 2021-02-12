#include <iostream>
#include "Deck.cpp"
#include "Dealer.cpp"


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
        for(int k = 0; k < sizeof(dealer.playerArray[i].hand)/sizeof(dealer.playerArray[i].hand[0]); k++)
        {
            std::cout<<dealer.playerArray[i].hand[k].face + " Of " + dealer.playerArray[i].hand[k].suit<<std::endl;   //print player hands         
        }

        std::cout<<""<<std::endl;
    }

    std::cout<<"Flip over top card:"<<std::endl;
    std::cout<<""<<std::endl;

    std::cout<<dealer.ExposeTopCard().face + " Of " + dealer.ExposeTopCard().suit<<std::endl; // print top card
    std::cout<<""<<std::endl;

    
    return 0;
}