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
        std::cout<<d.deck.at(i).face + " Of " + d.deck.at(i).suit<<std::endl;
    }

    std::cout<<""<<std::endl;
    std::cout<<" Shuffled: "<<std::endl;
    std::cout<<""<<std::endl;
    d.Shuffle();

    for(int i = 0; i < d.deck.size(); i++)
    {
       std::cout<<d.deck.at(i).face + " Of " + d.deck.at(i).suit<<std::endl;
    }

    std::cout<<""<<std::endl;
    std::cout<<"The Deal:"<<std::endl;
    std::cout<<""<<std::endl;

    dealer.packOfCards.Shuffle();
    dealer.Deal("threeFirst");

    for(int i = 0; i < sizeof(dealer.playerArray)/sizeof(dealer.playerArray[0]); i++)
    {
        std::cout<<dealer.playerArray[i].name + ":"<<std::endl;  
        for(int k = 0; k < sizeof(dealer.playerArray[i].hand)/sizeof(dealer.playerArray[i].hand[0]); k++)
        {
            std::cout<<dealer.playerArray[i].hand[k].face + " Of " + dealer.playerArray[i].hand[k].suit<<std::endl;            
        }

        std::cout<<""<<std::endl;
    }
    
    return 0;
}