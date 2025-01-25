#include <iostream>
#include "chef.h"
#include"italianchef.h"

using namespace std;
bool loop;

int main()
{
    Chef C("Gordon");
    C.makeSalad(10);
    C.makeSoup(13);

    ItalianChef IC("Mario");
    IC.makeSalad(17);
    IC.askSecret("pizza",30,25);

    return 0;
}
