#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
using namespace std;
#include <iostream>

class Luottotili: public Pankkitili
{
public:
    Luottotili(string, double);
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
    virtual double getBalance() override;
protected:
    double luottoRaja;

};

#endif // LUOTTOTILI_H
