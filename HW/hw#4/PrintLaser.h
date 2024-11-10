#ifndef PrintLaser_H
#define PrintLaser_H

class PrintLaser : public Print {
    int availableToner;
public:
    PrintLaser(string model, string manufacturer, int availableCount, int availableToner) : Print(model, manufacturer, availableCount) {
        this->availableToner = availableToner;
    }
    bool printLaser(int pages) {
        if (print(pages));
        else return false;
        if (availableToner < pages) {
            cout << "��ʰ� �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            availableToner--;
        }
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manufacturer() << "\t,���� ���� " << get_availableCount() << "��\t,������� " << availableToner << endl;
    }
};

#endif