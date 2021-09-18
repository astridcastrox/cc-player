#include <iostream>
#include "Player.hh"


int main()
{
    std::cout << "Players:"<< std::endl;
    std::cout << std::endl;
    Player* user1{new Player("astrodnauta", 3, 3500 , "Online")};
    user1->showPlayer();
    std::cout << std::endl;
    Player* user2{new Player("luzbell", 5, 5730, "Online")};
    user2->showPlayer();
    std::cout << std::endl;
    Player* user3{new Player("canela", 40, 40390 , "Offline")};
    user3->showPlayer();
    std::cout << std::endl;
    Player* user4{new Player("astrod", 17, 17893 , "Online")};
    user4->showPlayer();
    std::cout << std::endl;
    Player* user5{new Player("majome", 34, 34093 , "Offline")};
    user5->showPlayer();

    std::cin.get();
    return 0;
}