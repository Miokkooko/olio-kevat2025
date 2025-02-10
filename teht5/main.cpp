#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("A");

    Seuraaja b("B");

    Seuraaja c("C");


    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.postita("Tama on viesti");
    n.tulosta();

    n.poista(&b);

    n.tulosta();
    return 0;
}
