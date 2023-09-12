#include "italianchef.h"

ItalianChef::ItalianChef(string a, int v, int j):Chef(a)
{
    vesi=v;
    jauhot=j;
}

ItalianChef::~ItalianChef()
{

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int j, int v)
{
    vesi=v;
    jauhot=j;

    cout<< name << " makes pasta with special recipe"<<endl;
    cout<< name << " users jauhot = "<< jauhot <<endl;
    cout<< name << " users vesi = "<< vesi <<endl;

}
