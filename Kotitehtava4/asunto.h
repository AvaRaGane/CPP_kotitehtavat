#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto
{
public:
    Asunto();
    void Maarita(int a, int b);
    double LaskeKulutus(double c);

private:
    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
