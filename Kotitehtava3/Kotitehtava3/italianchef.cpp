#include "italianchef.h"

ItalianChef::ItalianChef(string b) :Chef(b)
{
    cout<< name << " konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<< name << " destruktori"<<endl;
}

string ItalianChef::getName()
{
    cout<< name << " name is "<< name <<endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout<< name << " makes pasta"<<endl;
}
