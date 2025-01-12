#include <iostream>

using namespace std;
int randluku;
int annluku;
int game(int);
int arvaukset;
int maxnum;
bool oikein=false;


int main()
{

    cout<<"Anna maxnum"<<endl;
    cin>>maxnum;

    while(oikein !=true)
    {
    arvaukset += game(maxnum);
    }
    cout<<"Arvauksien maara= "<<arvaukset<<endl;
    return 0;
}

int game(int maxnum)
{
    srand(5);
    randluku = rand() % maxnum;

    cout<<"Arvaa numero"<<endl;
    cin>>annluku;

    if(annluku==randluku)
    {
        cout<<"Oikein"<<endl;
        oikein = true;
    }
    if(annluku>randluku)
    {
        cout<<"Antamasi luku on liian suuri"<<endl;
    }
    if(annluku<randluku)
    {
        cout<<"Antamasi luku on liian pieni"<<endl;
    }

     return 1;
}
