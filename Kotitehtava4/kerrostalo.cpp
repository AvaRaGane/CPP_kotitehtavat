#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu!" << endl;
    cout << "Maaritetaan sen sisalto:" << endl;
    eka.MaaritaAsunnot();
    toka.MaaritaAsunnot();
    kolmas.MaaritaAsunnot();
    LaskeKulutus(1);
}

Kerrostalo::~Kerrostalo()
{
    cout << "Kerrostalo tuhottu!" << endl;
}



double Kerrostalo::LaskeKulutus(double c)
{
    cout<<"Kerrostalon kokonaiskulutus on " << endl;
}
