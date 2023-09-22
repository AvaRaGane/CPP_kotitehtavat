#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu!" << endl;
}

void Kerros::MaaritaAsunnot()
{
    cout << "Maaritetaan kerroksen asunnot!" << endl;
    as1.Maarita(2, 100);
    as2.Maarita(2, 100);
    as3.Maarita(2, 100);
    as4.Maarita(2, 100);
    cout << "Maaritetty!" << endl;
}

double Kerros::LaskeKulutus(double h)
{
    double Kulutus = h * ((as1.LaskeKulutus(h)) +
                          (as2.LaskeKulutus(h)) +
                          (as3.LaskeKulutus(h)) +
                          (as4.LaskeKulutus(h)));


     return Kulutus;
}
