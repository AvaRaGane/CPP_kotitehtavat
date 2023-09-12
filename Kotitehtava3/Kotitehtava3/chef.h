#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;


class Chef
{
public:
    Chef(string a);
    virtual ~Chef();
    void makeSalad();
    void makeSoup();
    virtual string getName();
protected:
    string name;
};

#endif // CHEF_H
