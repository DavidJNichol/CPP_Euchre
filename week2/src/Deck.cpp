#include "Deck.h"

Deck::Deck()
{
    int suitIterator = 0;
    int faceIterator = 0;

    //initialize deck   
    for(int i =0; i <24; i++)
    {
        if(faceIterator == 6)
        {
            faceIterator = 0;
            suitIterator++;
        }
        
        deck[i].suit = suitArray[suitIterator];
        deck[i].face = faceArray[faceIterator];
        
        faceIterator++;        
    }
}
    


void Deck::Shuffle()
{

}


