#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game();
    void Game2(int);
    ~Game();
    void play();

private:
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
