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
            cout << "������ �����Ͽ� ����Ʈ �� �� �����ϴ�.\n";
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