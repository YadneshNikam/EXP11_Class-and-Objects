#include <iostream>
using namespace std;
class cube{
    double height=2.0;
    double width=2.0;
    double length=2.0;
    public:
    double volume(){
        return height*width*length;
    }
};

int main() {
    cube c;
    cout << "Volume of cube: " << c.volume() << endl;
    return 0;
}