#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;


class ItalianChef:public Chef
{
public:
    ItalianChef(string a, int, int);
    ~ItalianChef();
    string getName();
    void makePasta(int, int);
private:
    int vesi, jauhot;
};

#endif // ITALIANCHEF_H
