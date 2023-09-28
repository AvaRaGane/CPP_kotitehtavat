#include "kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros()
{
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
    cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    cout<<"Kerros tuhottu!"<<endl;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan kerroksen asunnot:"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
    cout<<"Kerroksen asunnot maaritetty"<<endl;
}

double Kerros::laskeKulutus(double h)
{
    return as1->laskeKulutus(h)+as2->laskeKulutus(h)+as3->laskeKulutus(h)+as4->laskeKulutus(h);
}
