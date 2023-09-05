#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum);
int maxnum=0;

int main()
{
    cout << "Tervetuloa arvuuttelemaan numeroita!"<< endl;//Tulostetaan alkutervehdys
    cout << "Annahan korkein luku, mita haluat arvata: ";//Tulostetaan alkutervehdys
    cin >> maxnum;
    game(maxnum);
    return 0;
}

int game(int maxnum)
{
    int luku=0, arvaus=0, arvauksia=0;
    srand(time(0));	//alustetaan satunnaislukugeneraattori
    luku=rand() % maxnum+1; //Arvotaan satunnainen luku väliltä 0-20, tallennetaan se muuttujaan luku
    //cout << luku << endl;//tulostetaan näytölle arvottu luku
    cout << "Anna luku valilta 0-"<<maxnum<<": "; //Kysytään pelaajalta eka arvaus
    cin >> arvaus;//tallennetaan syöte muuttujaan arvaus
    /*Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
    Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus” */
    while (arvaus!=luku) {//while-lause pyörii silmukkaa kunnes arvaus on oikein.
        if (arvaus < luku){//if-lause, jos arvaus on lukua pienempi
            arvauksia++;
            cout << "Luku on suurempi."<< endl;
            cout << "Arvaa uudestaan: ";
            cin >> arvaus;
            }
        else if (arvaus > luku){//if-lause, jos arvaus on lukua suurempi
            arvauksia++;
            cout << "Luku on pienempi."<< endl;
            cout << "Arvaa uudestaan: ";
            cin >> arvaus;
            }
    }
    arvauksia++;
    cout << "Se meni oikein!"<< endl;//kun arvaus osui oikeaksi, poistutaan silmukasta, tulostellaan lopputekstit,
    cout << "Kaytit arvauksia yhteensa "<< arvauksia << " kappaletta."<<endl;//arvauksien määrä ja
    if (arvauksia==1){
            cout << "Ekalla purkkiin, huijasitko vai oletko Hannu Hanhi?"<<endl;//arvauksien määrä ja
    }
    if (arvauksia<5 && arvauksia>1){
            cout << "Alle 5 arvausta, meni tosi hyvin!"<<endl;//arvauksien määrä ja
    }
    if (maxnum>100 && arvauksia<10 && arvauksia>5){
            cout << "Alle 10 arvausta, meni hyvin!"<<endl;//arvauksien määrä ja
    }
    if (maxnum>100 && arvauksia<20 && arvauksia>10){
            cout << "Reilut 10 arvausta, oisi voinut menna paremminkin!"<<endl;//arvauksien määrä ja
    }
    if (arvauksia<100 && arvauksia>20){
            cout << "Arvauksia yli 20, missa meni vikaan?!"<<endl;//arvauksien määrä ja
    }
    if (arvauksia>100){
            cout << "Heititko vitsiksi koko leikin?!"<<endl;//arvauksien määrä ja
    }
    return 0;//lopetetaan ohjelma.
}
