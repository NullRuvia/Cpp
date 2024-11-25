#ifndef Circle_H
#define Circle_H

class Circle : public Shape {
protected:
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

#endif