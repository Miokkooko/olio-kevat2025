#include "seuraaja.h"

Seuraaja::Seuraaja(string n)
{
    cout<<"Seuraaja "<<n<<" luotu"<<endl;
    nimi = n;
    alku = this;

}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string s)
{
    cout <<"Seuraaja "<<getNimi()<<" sai viestin "<<s<<endl;
}
