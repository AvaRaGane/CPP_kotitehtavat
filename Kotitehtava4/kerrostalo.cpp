#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu!" << endl;
    cout << "Maaritetaan sen sisalto:" << endl;
    eka.MaaritaAsunnot();
    toka.MaaritaAsunnot();
    kolmas.MaaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    cout << "Kerrostalo tuhottu!" << endl;
}



double Kerrostalo::LaskeKulutus(double h)
{
    double ekanKulutus = eka.LaskeKulutus(h);
    double tokanKulutus = toka.LaskeKulutus(h);
    double kolmannenKulutus = kolmas.LaskeKulutus(h);

    double kokonaisKulutus = ekanKulutus + tokanKulutus + kolmannenKulutus;
    return kokonaisKulutus;
}
