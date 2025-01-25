#include "italianchef.h"

ItalianChef::ItalianChef(string name) :Chef(name)
{
    cout<<"ItalianChef "<<name<<" constructed"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<chefName<<" destroyed"<<endl;
}

bool ItalianChef::askSecret(string secret, int a, int b)
{
    int res = secret.compare(password);
    if(res ==0)
    {
        cout<<"Password ok!"<<endl;
        makePizza(a,b);
    }else
    {
        cout<<"Password wrong!"<<endl;
    }
}

int ItalianChef::makePizza(int a, int b)
{
    int c = a/5;
    int d = b/5;
    int e;
    if(c>d)
    {
        e = d;
    }else
    {
        e=c;
    }
    cout<<"Chef "<<chefName<<" with "<<a<<" water and"<<b<<" flour can make "<<e<<" pizzas"<<endl;
}
