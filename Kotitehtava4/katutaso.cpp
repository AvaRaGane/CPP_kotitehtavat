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
    cout << "Maaritetaan Kerrokselta perityt asunnot!" << endl;
    Kerros::MaaritaAsunnot();
}

double Katutaso::LaskeKulutus(double h)
{
    double Kulutus = h * ((as1.LaskeKulutus(h)) +
                          (as2.LaskeKulutus(h)) +
                          Kerros::LaskeKulutus(h));
    return Kulutus;
}
