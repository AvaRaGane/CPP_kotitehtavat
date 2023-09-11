#include "chef.h"

Chef::Chef(string a)
{
    name=a;
    cout<< name << " konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<< name << " destruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<< name << " makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<< name << " makes soup"<<endl;
}
