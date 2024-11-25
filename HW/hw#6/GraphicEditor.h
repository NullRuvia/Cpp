#ifndef GraphicEditor_H
#define GraphicEditor_H

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;
public:
    GraphicEditor() {
        cout << "그래픽 에디터입니다.\n";
        start();
    }
    void start() {
        while (true) {
            int n;
            n = UI::main_memu();
            switch (n) {
            case 1:
                n = UI::shape_memu();
                switch (n) {
                case 1:
                    v.push_back(new Line());
                    break;
                case 2:
                    v.push_back(new Circle());
                    break;
                case 3:
                    v.push_back(new Rect());
                    break;
                default:
                    cout << "잘못 선택하셨습니다.\n";
                    break;
                }
                break;
            case 2: {
                n = UI::delete_menu();
                if (n >= v.size() || n < 0) {  
                    cout << "없는 인덱스 입니다.\n";
                    break;
                }
                it = v.begin();
                Shape* tmp = *(it + n);
                v.erase(it + n);
                delete tmp;
                break;
            }
            case 3:
                UI::showAll(v, it);
                break;
            case 4:
                return;
            default:
                cout << "잘못 입력하셨습니다.\n";
                break;
            }
        }
    }

};

#endif