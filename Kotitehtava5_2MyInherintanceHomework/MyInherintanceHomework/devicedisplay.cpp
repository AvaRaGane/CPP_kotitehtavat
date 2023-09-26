#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay()
{

}

void DeviceDisplay::setDisplayResolution()
{
    short valinta=0;
    while (true) {

        cout << "Anna Display Resolution arvo"<<endl;
        cout<<"valinta	nimike	kuvasuhde   leveys	korkeus	"<<endl;
        cout<<"================================================="<<endl;
        cout<<"|1.	SVGA	4:03        800         600     |"<<endl;
        cout<<"|2.	WXGA	16:09       1280        720     |"<<endl;
        cout<<"|3.	SXGA	5:04        1280        1024    |"<<endl;
        cout<<"|4.	HD      16:09       1366        768     |"<<endl;
        cout<<"|5.	WXGA+	16:10       1440        900     |"<<endl;
        cout<<"|6.	HD+	16:09       1600        900     |"<<endl;
        cout<<"|7.	WSXGA+	16:10       1680        1050    |"<<endl;
        cout<<"|8.	FullHD	16:09       1920        1080    |"<<endl;
        cout<<"|9.	QWXGA	16:09       2048        1152    |"<<endl;
        cout<<"|10.	4K UHD	16:09       3840    	2160    |"<<endl;
        cout<<"================================================="<<endl;
        cout<<"Valintasi: ";
        cin >> valinta;
        cout<<endl;
        if (valinta >=1 && valinta <=10){
            break;
        }
        cout<<"Arvo ei kelpaa!"<<endl;
    }
    displayResolution=valinta;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
