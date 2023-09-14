#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef ramsey("Chef Gordon Ramsay");
    ItalianChef Mario("Chef Mario di Tottarelli", 250, 100);
    ramsey.makeSalad();
    Mario.makePasta(250, 100);
    ramsey.makeSoup();
    return 0;
}
