#include "katutaso.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso()
{
    as1 = new Asunto;
    as2 = new Asunto;
    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan katutason asunnot"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    cout<<"Maaritetaan katutasoon perityt asunnot"<<endl;
    Kerros::maaritaAsunnot();
    cout<<"Kaikki katutason asunnot maaritetty"<<endl;
}

double Katutaso::laskeKulutus(double h)
{
    return as1->laskeKulutus(h)+as2->laskeKulutus(h)+Kerros::laskeKulutus(h);
}
