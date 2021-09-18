#pragma once
#include <string>

class Character
{
    private:
        std::string user{};
        unsigned int level{};
    public:
        Character(std::string user, unsigned int level);
        void showCharacter();
};