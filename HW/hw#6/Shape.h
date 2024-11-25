#ifndef Shape_H
#define Shape_H

class Shape {
protected:
    virtual void draw() = 0;
public:
    void paint() { draw(); }
};

#endif