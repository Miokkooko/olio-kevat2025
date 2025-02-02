#include "pankkitili.h"

Pankkitili::Pankkitili(string n)
{
    cout<<"Pankkitili luotu "<<n<<":lle"<<endl;
    omistaja = n;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double d)
{
    saldo+=d;
}

bool Pankkitili::withdraw(double w)
{
    saldo-=w;
}
