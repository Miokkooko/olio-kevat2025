#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"
using namespace std;

class Notifikaattori
{
private:
    Seuraaja* seuraajat = nullptr;

public:
    Notifikaattori();
    void lisaa(Seuraaja*);
    void poista(Seuraaja*);
    void tulosta();
    void postita(string);

};

#endif // NOTIFIKAATTORI_H
