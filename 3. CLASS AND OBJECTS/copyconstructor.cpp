#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int x1, int y1);
    Point(const Point &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

Point::Point(int x1, int y1)
{
    x = x1;
    y = y1;
}

int main()
{
    Point p1(10, 20);
    Point p2 = p1;
    cout << "P1.X=" << p1.getx() << "\tp1.y=" << p1.gety() << endl;
    cout << "P2.X=" << p2.getx() << "\tp2.y=" << p2.gety() << endl;
    return 0;
}
