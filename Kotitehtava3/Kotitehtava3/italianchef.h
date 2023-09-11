#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;


class ItalianChef:public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
