#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    cout<<"DeviceBaseClass luotu"<<endl;
}

void DeviceBaseClass::setDeviceID()
{
    cout<< "Anna Device ID:";
    cin >> deviceID;
    //cout<<endl;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
