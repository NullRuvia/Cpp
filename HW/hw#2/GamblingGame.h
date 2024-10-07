#ifndef GameblingGame_H
#define GameblingGame_H

class GamblingGame {
    Player* p = new Player[2];
public:
    GamblingGame();
    void nameSet();
    string ranNum(string n);
    void startGame();
    ~GamblingGame() { delete[] p; }
};

#endif