#ifndef PrintInkJet_H
#define PrintInkJet_H

class PrintInkJet : public Print {
    int availableInk;
public:
    PrintInkJet(string model, string manufacturer, int availableCount, int availableInk) : Print(model, manufacturer, availableCount) {
        this->availableInk = availableInk;
    }
    bool printInkJet(int pages) {
        if (print(pages));
        else return false;
        if (availableInk < pages) {
            cout << "��ũ�� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            availableInk--;
        }
        return true;
    }
    void show() {
        cout << get_model() << "\t," << get_manufacturer() << "\t,���� ���� " << get_availableCount() << "��\t,���� ��ũ " << availableInk << endl;
    }
};

#endif