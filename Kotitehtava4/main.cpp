#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"
using namespace std;

int main()
{
    Kerrostalo eka;
    int hinta = 1;
    double kulutus =eka.LaskeKulutus(hinta);
    cout << "Kerrostalon kokonaiskulutus on "<< kulutus << " kun hinta on " << hinta << endl;

   /* Katutaso eka;
    eka.MaaritaAsunnot();
    int hinta = 1;
    double kulutus = eka.LaskeKulutus(hinta);
    cout << "Katutason kokonaiskulutus on "<< kulutus << " kun hinta on " << hinta << endl;
*/
return 0;
}
