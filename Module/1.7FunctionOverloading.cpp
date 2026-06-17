/* Program for function overloading */
#include "iostream"

using namespace std;
class A
{
private:
    int h, w;
    float base, h1;
    int r;

public:
    inline int area(int height, int width)
    {
        h = height;
        w = width;
        return (h * w);
    }

    float area(float radius)
    {
        r = radius;
        return (3.14 * r * r);
    }

    float area(float b, float h)
    {
        base = b;
        h1 = h;
        return (0.5 * base * h1);
    }
};
int main()
{
    A obj;
    cout << "\n\n\nThe Area of Rectangle" << obj.area(10, 20) << endl;
    cout << "The Area of Circle" << obj.area(4.5) << endl;
    cout << "The Area of Triangle" << obj.area(6.0f, 7.0f) << endl;
    return 0;
}