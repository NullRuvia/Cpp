#ifndef Line_H
#define Line_H

class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line" << endl;
	}
};

#endif