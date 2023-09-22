#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout << "Asunto luotu!" << endl;
}


void Asunto::Maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
    LaskeKulutus(1);
}

double Asunto::LaskeKulutus(double h)
{
    double Kulutus = h * (asukasMaara * neliot);
    cout << "Asunnon kulutus, kun hinta = " << h<< " on " << Kulutus << endl;
    return Kulutus;
}
