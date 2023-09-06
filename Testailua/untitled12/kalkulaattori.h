#ifndef KALKULAATTORI_H
#define KALKULAATTORI_H
#include <iostream>
using namespace std;

class kalkulaattori
{
public:
    kalkulaattori();
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




};

#endif // KALKULAATTORI_H
