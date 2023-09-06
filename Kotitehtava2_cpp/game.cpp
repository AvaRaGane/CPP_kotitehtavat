#include "game.h"

Game::Game(int numero)
{
    cout << "GAME CONSTRUCTOR: object initialized with 10 as a maximum value" <<endl;
    maxNumber = numero;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" <<endl;
}

void Game::play()
{
    srand(time(0));	//alustetaan satunnaislukugeneraattori
    randomNumber=rand() % maxNumber+1; //Arvotaan satunnainen luku väliltä 0-20, tallennetaan se muuttujaan luku
    cout << "Give your guess between 1-"<<maxNumber<<endl;
    cin >> playerGuess;
    while (playerGuess!=randomNumber) {//while-lause pyörii silmukkaa kunnes arvaus on oikein.
        if (playerGuess < randomNumber){//if-lause, jos arvaus on lukua pienempi
            numOfGuesses++;
            cout << "Luku on suurempi."<< endl;
             cout << "Give your guess between 1-"<<maxNumber<<endl;
            cin >> playerGuess;
            }
        else if (playerGuess > randomNumber){//if-lause, jos arvaus on lukua suurempi
            numOfGuesses++;
            cout << "Luku on pienempi."<< endl;
             cout << "Give your guess between 1-"<<maxNumber<<endl;
            cin >> playerGuess;
            }
    }
    numOfGuesses++;
    cout << "Se meni oikein!"<< endl;//kun arvaus osui oikeaksi, poistutaan silmukasta, tulostellaan lopputekstit,
    printGameResult();
}

void Game::printGameResult()
{
    cout << "Kaytit arvauksia yhteensa "<< numOfGuesses << " kappaletta."<<endl;//arvauksien määrä ja
}
