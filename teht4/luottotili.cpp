#include "luottotili.h"

Luottotili::Luottotili(string n, double d):Pankkitili(n)
{
    cout<<"Luottotili luotu "<<n<<":lle"<<endl;
    luottoRaja=d;
}

bool Luottotili::deposit(double d)
{
    luottoRaja-=d;
}

bool Luottotili::withdraw(double w)
{

    luottoRaja+=w;

}

double Luottotili::getBalance()
{
    return luottoRaja;
}
