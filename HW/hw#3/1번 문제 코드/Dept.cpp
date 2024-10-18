#include<iostream>
using namespace std;

#include "Dept.h"

Dept::Dept(Dept& dept) {
    this->size = dept.size;
    this->scores = new int[this->size];
    for (int i = 0; i < this->size; i++) {
        this->scores[i] = dept.scores[i];
    }
}
Dept::~Dept() {
    delete[] scores;
}

void Dept::read() {
    cout << size << "개 점수 입력>> ";
    for (int i = 0; i < size; ++i) {
        cin >> scores[i];
    }
}
bool Dept::isOver60(int index) {
    if (scores[index] > 60)
        return true;
    else
        return false;
}