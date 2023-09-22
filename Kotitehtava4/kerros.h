#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
    Kerros();
    virtual void MaaritaAsunnot();
    virtual double LaskeKulutus(double);
};

#endif // KERROS_H
