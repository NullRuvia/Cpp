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
            cout << "잉크가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            availableInk--;
        }
        return true;
    }
    void show() {
        cout << get_model() << "\t," << get_manufacturer() << "\t,남은 종이 " << get_availableCount() << "장\t,남은 잉크 " << availableInk << endl;
    }
};

#endif