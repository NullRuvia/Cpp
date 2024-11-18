#ifndef GraphicEditor_H
#define GraphicEditor_H

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	int count;
public:
	GraphicEditor() { pStart = NULL; count = 0; }
	void create(int num) {
		switch (num) {
		case 1:
			if (count == 0) {
				pStart = new Line();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Line());
			count++;
			break;

		case 2:
			if (count == 0) {
				pStart = new Circle();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Circle());
			count++;
			break;

		case 3:
			if (count == 0) {
				pStart = new Rect();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Rect());
			count++;
			break;

		}
	}
	void indelete(int num) {
		Shape* p = pStart;
		Shape* del = pStart;

		if (num < count) {
			for (int i = 0; i < num; i++) {
				p = del;
				del = del->getNext();
			}
			if (num == 0)
				pStart = p->getNext();
			else
				p->setNext(del);
			count--;
			if (count == 1) pLast = pStart;
			delete del;

		}
		else
			cout << "인덱스를 잘못 입력하셨습니다." << endl;
	}
	void call() {
		bool exit = true;
		cout << "그래픽 에디터입니다." << endl;
		while (exit) {
			switch (UI::main_memu()) {
			case 1:
				create(UI::shape_menu());
				break;
			case 2:
				indelete(UI::delete_menu());
				break;
			case 3: {
				Shape* p = pStart;
				for (int i = 0; i < count; i++) {
					cout << i << ": "; p->paint();
					p = p->getNext();
				}
				break;
			}
			case 4:
				exit = false;
				break;

			}
		}
	}
};

#endif