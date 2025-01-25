#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef :public Chef
{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string,int,int);
    int makePizza(int,int);

private:
    string password = "pizza";
    int flour;
    int water;
};

#endif // ITALIANCHEF_H
