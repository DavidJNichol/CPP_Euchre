#include <iostream>
#include "Deck.cpp"

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main()
{
    Deck d = Deck();
    for(int i = 0; i < 24; i++)
    {
        std::cout<<d.deck[i].face + " Of " + d.deck[i].suit<<std::endl;
    }

    std::srand(std::time(0));
    std::string str = "123456212";
    std::random_shuffle(str.begin(),str.end());
    std::cout << str;

    //std::cout<<" Shuffled: "<<std::endl;
    //d.Shuffle();

    //for(int i = 0; i < 24; i++)
    //{
        //std::cout<<d.deck[i].face + " Of " + d.deck[i].suit<<std::endl;
    //}

    
    return 0;
}