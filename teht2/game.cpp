#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

 Game::Game()
{

}

void Game::Game2(int max)
{
    cout<<"Object initialized with "<<max<<" as the max value"<<endl;
    numOfGuesses=0;
    srand(time(NULL));
    randomNumber = rand()%max + 1;

}

Game::~Game()
{
    cout<<"Object cleared from stack memory"<<endl;
}

void Game::play()
{
    int vastaus = false;
    while(vastaus == false)
    {
        cout<<"Arvaa numero"<<endl;
        cin>>playerGuess;

        if(playerGuess==randomNumber)
        {
            cout<<"JEE"<<endl;
            vastaus=true;
        }

        if(playerGuess>randomNumber)
        {
            cout<<"Vastauksesi on liian suuri"<<endl;
            numOfGuesses+=1;
        }

        if(playerGuess<randomNumber)
        {
            cout<<"Vastauksesi on liian pieni"<<endl;
            numOfGuesses+=1;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout<<"Arvauksien maara: "<< numOfGuesses <<endl;

}
