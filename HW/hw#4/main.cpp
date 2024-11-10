#include<iostream>
using namespace std;

#include "Print.h"
#include "PrintInkJet.h"
#include "PrintLaser.h"

int main() {
    int pnum, pages;
    char yon;
    PrintInkJet* inkjet = new PrintInkJet("Officejet V40", "Hp", 5, 10);
    PrintLaser* laser = new PrintLaser("SCX-6x45", "�Ｚ����", 3, 20);
    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����\n";
    cout << "��ũ�� : ";
    inkjet->show();
    cout << "������ : ";
    laser->show();
    cout << endl;

    while (true) {
        cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> pnum >> pages;
        if (pnum == 1)
            if (inkjet->printInkJet(pages))
                cout << "����Ʈ �Ͽ����ϴ�.\n";
        if (pnum == 2)
            if (laser->printLaser(pages))
                cout << "����Ʈ �Ͽ����ϴ�.\n";
        if (pnum != 1 && pnum != 2) cout << "�����͸� �߸� �����ϼ̽��ϴ�.\n";
        inkjet->show();
        laser->show();
        while (true) {
            cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
            cin >> yon;
            cout << endl;
            if (yon == 'n')
                return 0;
            else if (yon == 'y')
                break;
            else
                cout << "�߸� �Է��ϼ̽��ϴ�.\n";
        }
    }
    delete inkjet;
    delete laser;
}