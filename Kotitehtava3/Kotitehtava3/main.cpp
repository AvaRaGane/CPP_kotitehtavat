#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Chef ramsey("Chef Gordon Ramsay");
    ramsey.makeSalad();
    ramsey.makeSoup();
    ItalianChef antti("Chef Anthony Bourdain");
    antti.makeSoup();
    antti.makePasta();
    return 0;
}
