#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double LaskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif // KERROSTALO_H
