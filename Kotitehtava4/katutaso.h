#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
class Katutaso:public Kerros
{
public:
    Asunto as1;
    Asunto as2;
    Katutaso();
    void MaaritaAsunnot() override;
    double LaskeKulutus(double c) override;
};

#endif // KATUTASO_H
