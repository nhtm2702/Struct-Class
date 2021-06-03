#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x, y;
    Point();
    Point(double , double );
    Point(const Point&);
};

Point::Point() {x = 0;y = 0;}
Point::Point(double _x, double _y) : x(_x),y(_y) {}
Point::Point(const Point&p) : x(p.x),y(p.y) {}

class Triangle
{
    Point p1, p2, p3;
public:
    Triangle(const Point& , const Point& ,  const Point &);
    double getPerimeter() const;
    double getArea() const;
};

Triangle::Triangle(const Point& _p1, const Point& _p2,  const Point &_p3) : p1(_p1),p2(_p2),p3(_p3) {}
double Triangle :: getPerimeter() const
    {
        double ab = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
        double ac = sqrt((p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y));
        double bc = sqrt((p2.x-p3.x)*(p2.x-p3.x)+(p2.y-p3.y)*(p2.y-p3.y));
        return ab+ac+bc;
    }
double Triangle ::getArea() const
    {
        double ab = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
        double ac = sqrt((p1.x-p3.x)*(p1.x-p3.x)+(p1.y-p3.y)*(p1.y-p3.y));
        double bc = sqrt((p2.x-p3.x)*(p2.x-p3.x)+(p2.y-p3.y)*(p2.y-p3.y));
        double p = (ab+ac+bc)/2;
        return sqrt(p*(p-ab)*(p-ac)*(p-bc));
    }

int main()
{
    Point A(1,1), B(1, 4), C(4, 1);
    Triangle tri(A, B, C);
    cout << tri.getPerimeter() << endl;
}
