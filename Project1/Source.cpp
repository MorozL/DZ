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

int main() {







	return 0;
}