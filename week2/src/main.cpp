#include <iostream>
#include "Deck.cpp"

int main()
{
    Deck d = Deck();
    for(int i = 0; i < 24; i++)
    {
        std::cout<<d.deck[i].face<<std::endl;
        std::cout<<d.deck[i].suit<<std::endl;
    }

    
    return 0;
}