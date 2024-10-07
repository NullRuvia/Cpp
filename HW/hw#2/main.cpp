#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Player.h"
#include "GamblingGame.h"

int main() {
    GamblingGame game;
    game.nameSet();
    game.startGame();
}