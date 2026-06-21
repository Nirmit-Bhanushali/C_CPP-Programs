#include "iostream"

using namespace std;
class AreaCalculator {
public:
    // Function for Area of Circle
    void calculate_area(float radius) {
        float area = 3.14 * radius * radius;
        cout << "\nArea of Circle: " << area;
    }

    // Function for Area of Rectangle
    void calculate_area(float length, float breadth) {
        float area = length * breadth;
        cout << "\nArea of Rectangle: " << area;
    }
};

int main() {
    AreaCalculator obj;
    float r, l, b;

    cout << "Enter radius of circle: ";
    cin >> r;
    obj.calculate_area(r);

    cout << "\n\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    obj.calculate_area(l, b);
    return 0;
}