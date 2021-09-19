#pragma once
#include <string>
#include "Character.hh"

class Player: public Character
{
    private:
        unsigned int points{};
        std::string status{};
    public:
        Player(std::string user, unsigned int level, unsigned int points, std::string status);
        void showPlayer();
};