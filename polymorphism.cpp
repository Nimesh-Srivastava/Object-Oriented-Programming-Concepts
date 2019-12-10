#include<iostream>

using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "Drawing...." << endl;
	}
};

class Rectangle : public Shape {
public:
	void draw() {
		cout << "Drawing rectangle" << endl;
	}
};

class Circle : public Shape {
public:
	void draw() {
		cout << "Drawing circle" << endl;
	}
};

int main() {
	Shape* s;
	Shape s1;
	Rectangle r1;
	Circle c1;
	s = &s1;
	s->draw();
	s = &r1;
	s->draw();
	s = &c1;
	s->draw();
	cout << "\n\n\n\n\n";
	return 0;
}