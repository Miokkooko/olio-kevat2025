#ifndef OTHERASIAKAS_H
#define OTHERASIAKAS_H
#include <iostream>

#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class OtherAsiakas
{


public:
    OtherAsiakas(string,double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);



private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // OTHERASIAKAS_H
