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

double Kerros::LaskeKulutus(double c)
{
    double hinta = 1.0;
    cout << "Kerroksen kulutus, kun hinta = " << hinta << " on " << hinta * c << endl;
    return 200;
}
