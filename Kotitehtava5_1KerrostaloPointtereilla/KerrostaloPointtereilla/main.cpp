#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    //Asunto Eka;
    //Eka.maarita(2,100);
    cout << "Hello World!" << endl;
    //Eka.laskeKulutus(1);
    //Kerros Eka;
    //Eka.maaritaAsunnot();
    //Kerrostalo Eka;
    Kerrostalo* Eka = new Kerrostalo;
    //cout<<"Hinnan ollessa 1, on kerroksen kulutus "<<Eka.laskeKulutus(1)<<endl;
    cout<<"Hinnan ollessa 1, on kerroksen kulutus "<<Eka->laskeKulutus(1)<<endl;
    delete Eka;
    return 0;
}
