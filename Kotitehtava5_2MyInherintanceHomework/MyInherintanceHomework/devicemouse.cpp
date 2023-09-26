#include "devicemouse.h"

DeviceMouse::DeviceMouse()
{
    cout<<"DeviceMouse luotu"<<endl;
}

void DeviceMouse::setPrimaryButton()
{
    short valinta=0;
    while (true) {
        cout <<"Anna Mouse Primary Button arvo"<<endl;
        cout <<"1: Vasen"<<endl;
        cout <<"2: Oikea"<<endl;
        cout <<"valintasi:";
        cin >>valinta;
        cout << endl;
        if (valinta >= 1 && valinta <= 2) {
            break;
        }
        cout<<"Arvo ei kelpaa!"<<endl;
    }
    primaryButton=valinta;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
