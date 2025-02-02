#include "asiakas.h"

Asiakas::Asiakas(string n, double d):kayttotili(n),luottotili(n,d)
{
    nimi = n;
    cout<<"Asiakkuus luotu "<<n<<":lle"<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout<<"Pankkitilin saldo: "<<kayttotili.getBalance()<<endl;

    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double d)
{
    if(kayttotili.getBalance()<0)
    {

        return false;
    }else
    {
        cout<<"Pankkitili: Tilille talletettu "<<d<<endl;
        kayttotili.deposit(d);
        return true;
    }

}

bool Asiakas::nosto(double d)
{

    if(d>kayttotili.getBalance())
    {
        cout<<"Pankkitili: Tililla ei tarpeeksi rahaa"<<endl;
        return false;
    }else
    {
        cout<<"Pankkitili: Tililta nostettu "<<d<<endl;
        kayttotili.withdraw(d);
        return true;
    }
}

bool Asiakas::luotonMaksu(double d)
{
    if(luottotili.getBalance()<0)
    {

        return false;
    }else
    {
        cout<<"Luottotili: Luottoa maksettu "<<d<<endl;
        luottotili.deposit(d);
        return true;
    }
}

bool Asiakas::luotonNosto(double d)
{
    if(d+luottotili.getBalance()>0)
    {
        cout<<"Luottotili: Luottoa ei jaljella"<<endl;
        return false;
    }else
    {
        cout<<"Luottotili: Tililta nostettu "<<d<<endl;
        luottotili.withdraw(d);
        return true;
    }
}

bool Asiakas::tiliSiirto(double d, OtherAsiakas &other)
{
    if(kayttotili.getBalance()>d)
    {
    other.talletus(d);
        kayttotili.withdraw(d);
        cout<<nimi<<"Siirtää Bertalle "<<d<<endl;
        return true;
    }else
    {
        cout<<"Tililla ei tarpeeksi rahaa tilisiirtoon"<<endl;
        return false;
    }
}
