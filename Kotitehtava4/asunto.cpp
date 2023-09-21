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
    double c = a * b;
    LaskeKulutus(c);
}

double Asunto::LaskeKulutus(double c)
{
    double hinta = 1.0;
    cout << "Asunnon kulutus, kun hinta = " << hinta << " on " << hinta * c << endl;
    return hinta * c;
}
