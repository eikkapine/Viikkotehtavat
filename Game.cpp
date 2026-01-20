#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

Game::Game(int maxNum)
    : maxNumber(maxNum), playerGuess(0), numOfGuesses(0)
{
    srand(time(nullptr));
    randomNumber = rand() % maxNumber + 1;

    cout << "[DEBUG] Game constructor called" << endl;
    cout << "[DEBUG] maxNumber set to " << maxNumber << endl;
    cout << "[DEBUG] randomNumber generated: " << randomNumber << endl;
}

Game::~Game()
{
    cout << "[DEBUG] Game destructor called" << endl;
}

void Game::play()
{
    cout << "[DEBUG] play() started" << endl;

    while (true)
    {
        cout << "Arvaa luku (1-" << maxNumber << "): ";
        cin >> playerGuess;
        numOfGuesses++;

        cout << "[DEBUG] playerGuess: " << playerGuess << ", numOfGuesses: " << numOfGuesses << endl;

        if (playerGuess < randomNumber)
        {
            cout << "Liian pieni!" << endl;
        }
        else if (playerGuess > randomNumber)
        {
            cout << "Liian suuri!" << endl;
        }
        else
        {
            cout << "Oikein!" << endl;
            printGameResult();
            break;
        }
    }

    cout << "[DEBUG] play() ended" << endl;
}

void Game::printGameResult()
{
    cout << "[DEBUG] printGameResult() called" << endl;
    cout << "Oikea luku oli: " << randomNumber << endl;
    cout << "Arvausten maara: " << numOfGuesses << endl;
}
