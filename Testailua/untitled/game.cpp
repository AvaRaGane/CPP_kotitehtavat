#include "game.h"

Game::Game(int a)
{
    maxNumber = a;
    cout << "object initialized with "<<maxNumber<<" as a maximum value" << endl;
}

Game::~Game()
{

}

void Game::play()
{
    srand(time(0));
    randomNumber = rand() % maxNumber+1;
    cout << randomNumber << endl;
}

void Game::printGameResult()
{

}
