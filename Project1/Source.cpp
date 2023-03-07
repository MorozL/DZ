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
		std::cout << "��������� � ������ (" << p1.x << ", " << p1.y << "), (" << p2.x << ", " << p2.y << "), (" << p3.x << ", " << p3.y << ")" << std::endl;
	}
};


int main() {







	return 0;
}