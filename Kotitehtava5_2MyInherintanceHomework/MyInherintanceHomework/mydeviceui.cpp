#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    cout<<"MyDeviceUI luotu"<<endl;
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceDisplay;
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
}

void MyDeviceUI::uiShowMenu()
{
    int valinta=0;
    while (valinta != 5)
    {
        cout << "DEVICE MENU" << endl;
        cout << "===========" << endl;
        cout << "1: Set Mouse Information" << endl;
        cout << "2: Set Touch Pad Information" << endl;
        cout << "3: Set Display Information" << endl;
        cout << "4: Show Devices Information" << endl;
        cout << "5: Finish" << endl<<endl;
        cout << "Valitse:";
        cin >> valinta;
        cout << endl;
        if (valinta==1)
            {
                uiSetMouseInformation();
            }
            if (valinta==2)
            {
                uiSetTouchPadInformation();
            }
            if (valinta==3)
            {
                uiSetDisplayInformation();
            }
            if (valinta==4)
            {
                uiShowDeviceInformation();
            }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout<<endl<<"SET MOUSE INFORMATION"<<endl;
    cout<<"====================="<<endl;
    //cout<<"Set Mouse Device ID"<<endl;
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout<<endl<<"SET TOUCH PAD INFORMATION"<<endl;
    cout<<"====================="<<endl;
    cout<<"Set Touch Pad Device ID"<<endl;
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout<<endl<<"SET DISPLAY INFORMATION"<<endl;
    cout<<"====================="<<endl;
    //cout<<"Set Display Device ID"<<endl;
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout<<"    SYSTEM INFORMATION"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Mouse deviceID:          "<<objectDeviceMouse->getDeviceID()<<endl;
    cout<<"Mouse Primarybutton:     "<<objectDeviceMouse->getPrimaryButton()<<endl;
    cout<<"TouchPad deviceID:       "<<objectDeviceTouchPad->getDeviceID()<<endl;
    cout<<"TouchPad Sensitivity:    "<<objectDeviceTouchPad->getTouchPadSensitivity()<<endl;
    cout<<"Display deviceID:        "<<objectDeviceDisplay->getDeviceID()<<endl;
    cout<<"Display Resolution:      "<<objectDeviceDisplay->getDisplayResolution()<<endl;
    cout<<"=========================="<<endl;
}
