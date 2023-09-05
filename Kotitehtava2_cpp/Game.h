#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;

class Game
{
public:
    Game(int); // muodostin
    ~Game(); // tuhoaja

    void play();

private:

    void printGameResult();
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
};

#endif // GAME_H
