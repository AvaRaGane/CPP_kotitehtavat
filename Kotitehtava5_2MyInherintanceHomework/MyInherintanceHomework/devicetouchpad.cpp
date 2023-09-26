#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad()
{
    cout<<"DeviceTouchPad luotu"<<endl;
}

void DeviceTouchPad::setTouchPadSensitivity()
{
    short valinta=0;
    while (true) {
        cout << "Anna Device Touch Pad Sensitivity -arvo"<<endl;
        cout << "more 1---2---3---4---5 less"<<endl;
        cout<<"Valintasi: ";
        cin >> valinta;
        cout<<endl;
        if (valinta >=1 && valinta <=5){
            break;
        }
        cout<<"Arvo ei kelpaa!"<<endl;
    }
    touchPadSensitivity=valinta;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
