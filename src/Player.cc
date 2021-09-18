#include <iostream>
#include "Character.hh"
#include "Player.hh"

Character::Character(std::string user, unsigned int level)
{
    this->user = user;
    this->level = level;
}

Player::Player(std::string user, unsigned int level, unsigned int points,std::string status) : Character(user, level)
{
    this->points = points;
    this->status = status;
}

void Character::showCharacter()
{
    std::cout << "User: " << user << std::endl;
    std::cout << "Level: " << level << std::endl;
} 

void Player::showPlayer()
{
    showCharacter();
    std::cout << "Points: " << points << std::endl;
    std::cout << "Status: " << status << std::endl;
}