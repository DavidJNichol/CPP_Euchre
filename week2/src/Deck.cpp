#include "Deck.h"

Deck::Deck()
{
    // Both of these are used to iterate suit and face placement in the deck
    int suitIterator = 0;
    int faceIterator = 0;

    //initialize deck   
    for(int i = 0; i < sizeof(deck)/sizeof(deck[0]); i++) // until i == 24
    {
        if(faceIterator == sizeof(faceArray)/sizeof(faceArray[0])) // if faceiterator == 6
        {
            faceIterator = 0; // reset the face 
            suitIterator++; // move to the next suit
        }
        
        deck[i].suit = suitArray[suitIterator];
        deck[i].face = faceArray[faceIterator];
        
        faceIterator++;        
    }
}
    
//template <class RandomIt, class RandomFunc>
//void random_shuffle(RandomIt first, RandomIt last, RandomFunc&& r)
//{
  //  typename iterator_traits::difference_type i, n;
   // n = last - first;
    //for (i = n-1; i > 0; --i) 
    //{
     //   using std::swap;
      //  swap(first[i], first[r(i+1)]);
   // }
//}

void Deck::Shuffle() // Calls std shuffle
{   
    std::srand(unsigned(std::time(0)));
    std::random_shuffle(&deck[0], &deck[24]);
}



