//yadnesh Nikam
//24070123134

#include <iostream>
using namespace std;
class RectangleArea  {
    public:
    double length;
    double width;
    
};
float area(RectangleArea rect) {
    return rect.length * rect.width;
}

int main() {
    RectangleArea rect;
    cout << "Enter length: ";
    cin >> rect.length;
    cout << "Enter width: ";
    cin >> rect.width;

    cout << "Area of Rectangle: " << area(rect) << endl;

    return 0;
}
/*Enter length: 5
Enter width: 5
Area of Rectangle: 25*/
