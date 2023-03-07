#include<iostream>

using namespace std;
class Point {
public:
	double x, y;
	Point(double x = 0, double y = 0) : x(x), y(y) {}

	Point operator-(const Point& p) const {
		return Point(x - p.x, y - p.y);
	}
};

class Figure {
public:
	virtual void print() = 0; // ����� ���������� ����� ��� ��������� ���������� ��� ������
};

// ���� ��� (�� ���� ������)
class Line : public Figure {
public:
	Point p1, p2;
	Line(const Point& p1, const Point& p2) : p1(p1), p2(p2) {}

	void print() override {
		cout << "˳�� � ����� (" << p1.x << ", " << p1.y << ") �� ����� (" << p2.x << ", " << p2.y << ")" << std::endl;
	}
};

class Triangle : public Figure {
public:
	Point p1, p2, p3;
	Triangle(const Point& p1, const Point& p2, const Point& p3) : p1(p1), p2(p2), p3(p3) {}

	void print() override {
		cout << "��������� � ������ (" << p1.x << ", " << p1.y << "), (" << p2.x << ", " << p2.y << "), (" << p3.x << ", " << p3.y << ")" << std::endl;
	}
};
class Square : public Figure {
public:
	Point p1, p2, p3, p4;
	Square(const Point& p1, const Point& p2, const Point& p3, const Point& p4) : p1(p1), p2(p2), p3(p3), p4(p4) {}

	void print() override {
		cout << "������� � ������ (" << p1.x << ", " << p1.y << "), (" << p2.x << ", " << p2.y << "), (" << p3.x << ", " << p3.y << "), (" << p4.x << ", " << p4.y << ")" << std::endl;
	}
};
class Circle : public Figure {
public:
	Point center;
	double radius;
	Circle(const Point& center, double radius) : center(center), radius(radius) {}

	void print() override {
		cout << "���� � ������� (" << center.x << ", " << center.y << ") �� ������� " << radius << std::endl;
	}
};
int main() {
	
	Figure* figures[] = {
		new Line(Point(0,0), Point(1,1)),
		new Triangle(Point(0,0), Point(1,0), Point(0,1)),
		new Square(Point(0,0), Point(1,0), Point(1,1), Point(0,1)),
		new Circle(Point(0,0), 1.0)
	};

	
	for (int i = 0; i < 4; i++) {
		figures[i]->print();
	}

	
	for (int i = 0; i < 4; i++) {
		delete figures[i];
	}

	return 0;
}
