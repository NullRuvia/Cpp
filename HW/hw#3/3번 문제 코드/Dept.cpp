#include<iostream>
using namespace std;

#include "Dept.h"

Dept::~Dept() {
    delete[] scores;
}

void Dept::read() {
    cout << size << "�� ���� �Է�>> ";
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