#ifndef Rect_H
#define Rect_H

class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rectangle" << endl;
	}
};

#endif