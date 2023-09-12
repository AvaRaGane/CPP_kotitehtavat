#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Chef ramsey("Chef Gordon Ramsay");
    ItalianChef antti("Chef Anthony Bourdain", 250, 100);
    ramsey.makeSalad();
    antti.makePasta(250, 100);
    ramsey.makeSoup();
    return 0;
}
