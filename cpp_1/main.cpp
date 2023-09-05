#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int luku=0, arvaus=0;

    srand(time(0));	//alustetaan satunnaislukugeneraattori
    luku=rand() % 21; //Arvotaan satunnainen luku väliltä 0-20, tallennetaan se muuttujaan luku
    //cout << luku << endl;//tulostetaan näytölle arvottu luku
    cout << "Tervetuloa arvuuttelemaan numeroita!"<< endl;//Tulostetaan alkutervehdys
    cout << "Anna luku valilta 0-20: "; //Kysytään pelaajalta arvaus, tallennetaan se muuttujaan arvaus
    cin >> arvaus;//tallennetaan syöte muuttujaan arvaus
    /*Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
    Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus” */
    while (arvaus!=luku) {//while-lause pyörii silmukkaa kunnes arvaus on oikein.
        if (arvaus < luku){//if-lause, jos arvaus on lukua pienempi
            cout << "Luku on suurempi."<< endl;
            cout << "Arvaa uudestaan: ";
            cin >> arvaus;
            }
        else if (arvaus > luku){//if-lause, jos arvaus on lukua suurempi
            cout << "Luku on pienempi."<< endl;
            cout << "Arvaa uudestaan: ";
            cin >> arvaus;
            }
    }
    cout << "Loistavaa, se meni oikein!"<< endl;//kun arvaus osui oikeaksi, poistutaan silmukasta ja lopetetaan ohjelma.
    return 0;
}
