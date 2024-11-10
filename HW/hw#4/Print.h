#ifndef Print_H
#define Print_H

class Print {
    string model, manufacturer;
    int pcount, availableCount;
protected:
    Print(string model, string manufacturer, int availableCount) {
        this->model = model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
    }
    bool print(int pages) {
        if (availableCount < pages) {
            cout << "용지가 부족하여 프린트 할 수 없습니다.\n";
            return false;
        }
        for (int i = 0; i < pages; i++) {
            availableCount--;
        }
        return true;
    }
    string get_model() { return model; }
    string get_manufacturer() { return manufacturer; }
    int get_availableCount() { return availableCount; }
};

#endif