#include <iostream>
#include "asiakas.h"


using namespace std;

int main()
{
    Asiakas asiakas("Aapeli",-1000);
    OtherAsiakas asiakas2("Bertta",-2000);
    cout<<"Nimi:"<<asiakas.getNimi()<<endl;
    asiakas.showSaldo();
    asiakas.talletus(250);
    asiakas.nosto(300);
    asiakas.luotonNosto(1100);
    asiakas.luotonMaksu(200);
    asiakas.showSaldo();


    cout<<"Nimi:"<<asiakas2.getNimi()<<endl;
    asiakas2.talletus(400);
    asiakas2.showSaldo();

    cout<<"Nimi:"<<asiakas.getNimi()<<endl;
    asiakas.showSaldo();
    asiakas.tiliSiirto(200,asiakas2);
    asiakas.showSaldo();

    cout<<"Nimi:"<<asiakas2.getNimi()<<endl;

    asiakas2.showSaldo();

    return 0;
}
