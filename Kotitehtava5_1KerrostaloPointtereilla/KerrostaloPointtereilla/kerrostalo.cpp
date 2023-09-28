#include "kerrostalo.h"
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan sen sisalto:"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
    cout<<"Kerrostalo tuhottu!"<<endl;
}

double Kerrostalo::laskeKulutus(double h)
{
    return eka->laskeKulutus(h)+toka->laskeKulutus(h)+kolmas->laskeKulutus(h);
}
