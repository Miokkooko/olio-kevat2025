#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;
#include <iostream>

class Pankkitili
{
public:
    Pankkitili(string);
    virtual double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);


protected:
    string omistaja;
double saldo=0;
};

#endif // PANKKITILI_H
