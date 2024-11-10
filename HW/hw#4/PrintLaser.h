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
            cout << "토너가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            availableToner--;
        }
        return true;
    }
    void show() {
        cout << get_model() << " ," << get_manufacturer() << "\t,남은 종이 " << get_availableCount() << "장\t,남은토너 " << availableToner << endl;
    }
};

#endif