#ifndef PLAYER_H
#define PLAYER_H

// Player class definition
class Player
{
    public:
    Player();
    std::vector<Card> hand = std::vector<Card>(5); 
    std::string name;   
    double handScore;
};


#endif