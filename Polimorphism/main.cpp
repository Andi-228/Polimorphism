#include <iostream>

using namespace std;

class Figure {
protected:
	int _x; //width
	int _y; //hoight
public:
	void setDim(int x, int y = 1) {
		_x = x;
		_y = y;
	}
	virtual void showArea() = 0;
};

class Rectangle : public Figure {
public:
	void showArea() {
		cout << "x = " << _x << ", y = " << _y << endl;
		cout << "Rectangle area = " << _x * _y << endl;
	}
};

class RectTriangle : public Rectangle {
public:
	void showArea() {
		cout << "x = " << _x << ", y = " << _y << endl;
		cout << "Rectangle area = " << _x * _y * 0.5 << endl;
	}
};

class Circle : public Figure {
public:
	void showArea() {
		cout << "R = " << _x << endl;
		cout << "Circle Area = " << 3.14 * _x * _x << endl;
	}
};

int main() {

	Figure* pf;
	Rectangle r;
	pf = &r;
	pf->setDim(3, 4);
	pf->showArea();

	Circle c;
	pf = &c;
	pf->setDim(4);
	pf->showArea();
	
	RectTriangle rt;
	pf = &c;
	pf->setDim(6, 8);
	pf->showArea();


	return 0;
}