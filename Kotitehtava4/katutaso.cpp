#include "katutaso.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu!" << endl;
}

void Katutaso::MaaritaAsunnot()
{
    cout << "Maaritetaan katutason asunnot!" << endl;
    as1.Maarita(2, 100);
    as2.Maarita(2, 100);
    cout << "Maaritetty!" << endl;
    LaskeKulutus(2*200);
    Kerros::MaaritaAsunnot();
}

double Katutaso::LaskeKulutus(double c)
{
    double hinta = 1.0;
    cout << "Katutason kulutus, kun hinta = " << hinta << " on " << hinta * c << endl;
    return 0;
}
