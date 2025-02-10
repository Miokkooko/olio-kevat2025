#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{

}

void Notifikaattori::lisaa(Seuraaja* seuraaja)
{

    if(seuraajat==nullptr)
    {
        seuraajat = seuraaja;
        cout<<"Notifikaattori lisaa seuraajan "<<seuraaja->getNimi()<<endl;
        return;
    }
    seuraaja->next = seuraajat; // uusi seuraaja ensimmäiseksi = osoittaa
    cout<<"Notifikaattori lisaa seuraajan "<<seuraaja->getNimi()<<endl;
    seuraajat = seuraaja;
}

void Notifikaattori::poista(Seuraaja* s)
{
    if(seuraajat == nullptr)
    {
        cout<<"Ei seuraajia, ei voi poistaa"<<endl;
        return;
    }

    if(seuraajat == s)
    {
        cout<<"Poistettava on listan ensimmainen"<<endl;
        if(seuraajat->next == nullptr)
        {
            cout<<"Listalla on vain yksi seuraaja tyhjennetaan lista"<<endl;
            seuraajat = nullptr;
        }
        else
        {
            cout<<"Poistetaan ensimmainen ja tehdaan toisesta eka"<<endl;
            seuraajat = seuraajat->next;
        }
        return;
    }

    Seuraaja * osoitin = seuraajat; // listan alkuun

    while(osoitin->next != nullptr)
    {
        if(osoitin -> next == s)
        {
            cout<<"Poistin seuraajan "<<s->getNimi()<<endl;
            osoitin -> next = osoitin ->next ->next;
            return;
        }
        osoitin = osoitin -> next;
    }

}

void Notifikaattori::tulosta()
{
    if(seuraajat == nullptr)
    {
        cout<<"Ei vielä seuraajia"<<endl;
        return;
    }
    cout<<"notifikaattorin seuraajat"<<endl;
    Seuraaja * osoitin = seuraajat;
    while (osoitin->next != nullptr)
    {
        cout<<"Seuraaja "<<osoitin->getNimi()<<endl;
        osoitin = osoitin->next;
    }

}

void Notifikaattori::postita(string s)
{
    Seuraaja * osoittaja = seuraajat;
    while (osoittaja != nullptr)
    {
        osoittaja->paivitys(s);
        osoittaja =  osoittaja->next;

    }
}
