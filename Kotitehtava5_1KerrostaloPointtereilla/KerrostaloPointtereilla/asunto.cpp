#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

Asunto::~Asunto()
{
    cout<<"asunto tuhottu"<<endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara=a;
    neliot=b;
    cout<<"Maaritetaan asunto, asukkaita: "<<asukasMaara<<" pinta-ala: "<<neliot<<"."<<endl;
    cout<<"Hinnan ollessa 1 kulutus = "<<laskeKulutus(1)<<endl;
}

double Asunto::laskeKulutus(double h)
{
    return asukasMaara*neliot*h;
}
